import tf2_ros
import rclpy.time
import math
from math import radians
from geometry_msgs.msg import TransformStamped, Vector3, Quaternion

"""
TO DO:
    - Add ability to input pick and place coordinates
    - Change the private and public methods
    - Find libraries for the e2q and q2e
"""

def euler_from_quaternion(x, y, z, rw, rx, ry, rz):
    """
    Convert a quaternion into euler angles (roll, pitch, yaw)
    roll is rotation around x in radians (counterclockwise)
    pitch is rotation around y in radians (counterclockwise)
    yaw is rotation around z in radians (counterclockwise)
    """
    t0 = +2.0 * (rw * rx + ry * rz)
    t1 = +1.0 - 2.0 * (rx * rx + ry * ry)
    roll_x = round(math.atan2(t0, t1), 5)
    
    t2 = +2.0 * (rw * ry - rz * rx)
    t2 = +1.0 if t2 > +1.0 else t2
    t2 = -1.0 if t2 < -1.0 else t2
    pitch_y = round(math.asin(t2), 5)
    
    t3 = +2.0 * (rw * rz + rx * ry)
    t4 = +1.0 - 2.0 * (ry * ry + rz * rz)
    yaw_z = round(math.atan2(t3, t4), 5)
    
    return ([x, y, z, roll_x, pitch_y, yaw_z]) # in meters and radians


def quaternion_from_euler(obj):
    """
    IMPT: 
        -INPUT IS IN mm AND deg, SO IT IS CONVERTED TO m AND rad HERE
    Converts euler roll, pitch, yaw to quaternion
    quat = [w, x, y, z]
    """
    x = obj[0] * 0.001
    y = obj[1] * 0.001
    z = obj[2] * 0.001
    roll = radians(obj[3])
    pitch = radians(obj[4])
    yaw = radians(obj[5])
    

    cy = math.cos(yaw * 0.5)
    sy = math.sin(yaw * 0.5)
    cp = math.cos(pitch * 0.5)
    sp = math.sin(pitch * 0.5)
    cr = math.cos(roll * 0.5)
    sr = math.sin(roll * 0.5)

    q = [0] * 4
    q[0] = cy * cp * cr + sy * sp * sr #w
    q[1] = cy * cp * sr - sy * sp * cr #x
    q[2] = sy * cp * sr + cy * sp * cr #y
    q[3] = sy * cp * cr - cy * sp * sr #z

    return ([x, y, z] + q)


def stamped_to_euler(obj):
    x = obj.transform.translation.x
    y = obj.transform.translation.y
    z = obj.transform.translation.z
    rw = obj.transform.rotation.w
    rx = obj.transform.rotation.x
    ry = obj.transform.rotation.y
    rz = obj.transform.rotation.z
    return (euler_from_quaternion(x, y, z, rw, rx, ry, rz))
    


class TransformClass():
    def __init__(self):
        self.tfBuffer = tf2_ros.Buffer()

        base_to_home = TransformStamped()
        base_to_home.header.frame_id = 'base'
        base_to_home.header.stamp = rclpy.time.Time().to_msg()
        base_to_home.child_frame_id = 'home'
        base_to_home.transform.translation = Vector3(x = 0.4, y = 0.0, z = 0.4)
        base_to_home.transform.rotation = Quaternion(w = 0.0, x = 0.707, y = -0.707, z = 0.0)

        pick_to_safepick = TransformStamped()
        pick_to_safepick.header.frame_id = 'pick'
        pick_to_safepick.header.stamp = rclpy.time.Time().to_msg()
        pick_to_safepick.child_frame_id = 'safepick'
        pick_to_safepick.transform.translation = Vector3(x = 0.0, y = 0.0, z = -0.15)
        pick_to_safepick.transform.rotation = Quaternion(w = 1.0, x = 0.0, y = 0.0, z = 0.0)

        place_to_safeplace = TransformStamped()
        place_to_safeplace.header.frame_id = 'place'
        place_to_safeplace.header.stamp = rclpy.time.Time().to_msg()
        place_to_safeplace.child_frame_id = 'safeplace'
        place_to_safeplace.transform.translation = Vector3(x = 0.0, y = 0.0, z = -0.15)
        place_to_safeplace.transform.rotation = Quaternion(w = 1.0, x = 0.0, y = 0.0, z = 0.0)

        self.tfBuffer.set_transform(base_to_home, "")
        self.tfBuffer.set_transform(pick_to_safepick, "")
        self.tfBuffer.set_transform(place_to_safeplace, "")


    def add_pick_and_place(self, pickeuler, placeeuler, vbaseeuler):
        tempBuffer = tf2_ros.Buffer()
        pickquat = quaternion_from_euler(pickeuler)
        placequat = quaternion_from_euler(placeeuler)
        vbasequat = quaternion_from_euler(vbaseeuler)

        base_to_pick = TransformStamped()
        base_to_pick.header.frame_id = 'base'
        base_to_pick.header.stamp = rclpy.time.Time().to_msg()
        base_to_pick.child_frame_id = 'pick'
        base_to_pick.transform.translation = Vector3(x = pickquat[0], y = pickquat[1], z = pickquat[2])
        base_to_pick.transform.rotation = Quaternion(w = pickquat[3], x = pickquat[4], y = pickquat[5], z = pickquat[6])
        
        base_to_place = TransformStamped()
        base_to_place.header.frame_id = 'base'
        base_to_place.header.stamp = rclpy.time.Time().to_msg()
        base_to_place.child_frame_id = 'place'
        base_to_place.transform.translation = Vector3(x = placequat[0], y = placequat[1], z = placequat[2])
        base_to_place.transform.rotation = Quaternion(w = placequat[3], x = placequat[4], y = placequat[5], z = placequat[6])

        base_to_vbase = TransformStamped()
        base_to_vbase.header.frame_id = 'base'
        base_to_vbase.header.stamp = rclpy.time.Time().to_msg()
        base_to_vbase.child_frame_id = 'vbase'
        base_to_vbase.transform.translation = Vector3(x = vbasequat[0], y = vbasequat[1], z = vbasequat[2])
        base_to_vbase.transform.rotation = Quaternion(w = vbasequat[3], x = vbasequat[4], y = vbasequat[5], z = vbasequat[6])
        
        tempBuffer.set_transform(base_to_pick, "")
        tempBuffer.set_transform(base_to_place, "")
        tempBuffer.set_transform(base_to_vbase, "")

        vbase_to_pick = tempBuffer.lookup_transform('vbase', 'pick', rclpy.time.Time(seconds=0))
        vbase_to_place = tempBuffer.lookup_transform('vbase', 'place', rclpy.time.Time(seconds=0))

        self.tfBuffer.set_transform(vbase_to_pick, "")
        self.tfBuffer.set_transform(vbase_to_place, "")


    def add_vbase(self, vbasequat):
        base_to_vbase = TransformStamped()
        base_to_vbase.header.frame_id = 'base'
        base_to_vbase.header.stamp = rclpy.time.Time().to_msg()
        base_to_vbase.child_frame_id = 'vbase'
        base_to_vbase.transform.translation = Vector3(x = vbasequat[0], y = vbasequat[1], z = vbasequat[2])
        base_to_vbase.transform.rotation = Quaternion(w = vbasequat[3], x = vbasequat[4], y = vbasequat[5], z = vbasequat[6])
        
        self.tfBuffer.set_transform(base_to_vbase, "")


    def get_home(self):
        home_tstamped = self.tfBuffer.lookup_transform('base', 'home', rclpy.time.Time(seconds=0))
        home_euler = stamped_to_euler(home_tstamped)
        return home_euler
    

    def get_picks(self, vbase_euler):
        vbase_quaternion = quaternion_from_euler(vbase_euler)
        self.add_vbase(vbase_quaternion)
        pick_tstamped = self.tfBuffer.lookup_transform('base', 'pick', rclpy.time.Time(seconds=0))
        safepick_tstamped = self.tfBuffer.lookup_transform('base', 'safepick', rclpy.time.Time(seconds=0))
        pick_euler = stamped_to_euler(pick_tstamped)
        #print(pick_euler)
        safepick_euler = stamped_to_euler(safepick_tstamped)
        return pick_euler, safepick_euler


    def get_places(self, vbase_euler):
        vbase_quaternion = quaternion_from_euler(vbase_euler)
        self.add_vbase(vbase_quaternion)
        place_tstamped = self.tfBuffer.lookup_transform('base', 'place', rclpy.time.Time(seconds=0))
        safeplace_tstamped = self.tfBuffer.lookup_transform('base', 'safeplace', rclpy.time.Time(seconds=0))
        place_euler = stamped_to_euler(place_tstamped)
        safeplace_euler = stamped_to_euler(safeplace_tstamped)
        return place_euler, safeplace_euler


"""
if __name__ == '__main__':
    test = Coords()
    print(test.get_places([1.0, 1.0, 1.0, 0.0, 0.0, 0.0]))
"""

