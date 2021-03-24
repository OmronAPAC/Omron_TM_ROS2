from geometry_msgs.msg import TransformStamped
import rclpy
from rclpy.node import Node
from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster


class StaticFramePublisher(Node):
    """
    Broadcast transforms that never change.
    This example publishes transforms from `vbase_link` to a platform and sensor
    frames.
    The transforms are only published once at startup, and are constant for all
    time.
    """

    def __init__(self, vbase_coords):
        super().__init__('tm_static_tf')
        self._tf_publisher = StaticTransformBroadcaster(self)
        self.vbase_coords = vbase_coords
        # Publish static transforms once at startup
        self._tf_publisher.sendTransform(self.make_transforms())
        print('Static broadcast complete!')

    def make_transforms(self):
        base_to_home = TransformStamped()
        base_to_home.header.frame_id = 'base'
        base_to_home.header.stamp = rclpy.time.Time().to_msg()
        base_to_home.child_frame_id = 'home'
        base_to_home.transform.translation.x = 0.5
        base_to_home.transform.translation.y = 0.0
        base_to_home.transform.translation.z = 0.5
        base_to_home.transform.rotation.w = 0.0
        base_to_home.transform.rotation.x = -1.0
        base_to_home.transform.rotation.y = 0.0
        base_to_home.transform.rotation.z = 0.0

        base_to_vbase = TransformStamped()
        base_to_vbase.header.frame_id = 'base'
        base_to_vbase.header.stamp = rclpy.time.Time().to_msg()
        base_to_vbase.child_frame_id = 'vbase'
        base_to_vbase.transform.translation.x = 0.5
        base_to_vbase.transform.translation.y = 0.0
        base_to_vbase.transform.translation.z = 0.5
        base_to_vbase.transform.rotation.w = 0.0
        base_to_vbase.transform.rotation.x = -1.0
        base_to_vbase.transform.rotation.y = 0.0
        base_to_vbase.transform.rotation.z = 0.0


        vbase_to_pick = TransformStamped()
        vbase_to_pick.header.frame_id = 'vbase'
        vbase_to_pick.header.stamp = rclpy.time.Time().to_msg()
        vbase_to_pick.child_frame_id = 'pick'
        vbase_to_pick.transform.translation.x = 0.5
        vbase_to_pick.transform.translation.y = 0.2
        vbase_to_pick.transform.translation.z = 0.2
        vbase_to_pick.transform.rotation.w = 0.0
        vbase_to_pick.transform.rotation.x = -1.0
        vbase_to_pick.transform.rotation.y = 0.0
        vbase_to_pick.transform.rotation.z = 0.0

        vbase_to_place = TransformStamped()
        vbase_to_place.header.frame_id = 'vbase'
        vbase_to_place.header.stamp = rclpy.time.Time().to_msg()
        vbase_to_place.child_frame_id = 'place'
        vbase_to_place.transform.translation.x = 0.5
        vbase_to_place.transform.translation.y = -0.2
        vbase_to_place.transform.translation.z = 0.2
        vbase_to_place.transform.rotation.w = 0.0
        vbase_to_place.transform.rotation.x = -1.0
        vbase_to_place.transform.rotation.y = 0.0
        vbase_to_place.transform.rotation.z = 0.0

        pick_to_safepick = TransformStamped()
        pick_to_safepick.header.frame_id = 'pick'
        pick_to_safepick.header.stamp = rclpy.time.Time().to_msg()
        pick_to_safepick.child_frame_id = 'safepick'
        pick_to_safepick.transform.translation.x = 0.0
        pick_to_safepick.transform.translation.y = 0.0
        pick_to_safepick.transform.translation.z = 0.1
        pick_to_safepick.transform.rotation.w = 1.0
        pick_to_safepick.transform.rotation.x = 0.0
        pick_to_safepick.transform.rotation.y = 0.0
        pick_to_safepick.transform.rotation.z = 0.0

        place_to_safeplace = TransformStamped()
        place_to_safeplace.header.frame_id = 'place'
        place_to_safeplace.header.stamp = rclpy.time.Time().to_msg()
        place_to_safeplace.child_frame_id = 'safeplace'
        place_to_safeplace.transform.translation.x = 0.0
        place_to_safeplace.transform.translation.y = 0.0
        place_to_safeplace.transform.translation.z = 0.1
        place_to_safeplace.transform.rotation.w = 1.0
        place_to_safeplace.transform.rotation.x = 0.0
        place_to_safeplace.transform.rotation.y = 0.0
        place_to_safeplace.transform.rotation.z = 0.0

        return (
            base_to_home,
            base_to_vbase,
            vbase_to_pick,
            vbase_to_place,
            pick_to_safepick,
            place_to_safeplace,
        )


if __name__ == '__main__':
    rclpy.init()
    print('Starting static broadcast...')
    node = StaticFramePublisher([0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0])
    try:
        rclpy.spin_once(node)
    except KeyboardInterrupt:
        pass

    rclpy.shutdown()
"""
rclpy.init(args=None)
node = rclpy.create_node('tf_pls')
print('gucciness')
vbase_to_home = TransformStamped()
vbase_to_home.header.frame_id = 'vbase'
vbase_to_home.header.stamp = rclpy.time.Time().to_msg()
vbase_to_home.child_frame_id = 'home'
vbase_to_home.transform.translation.x = 0.5
vbase_to_home.transform.translation.y = 0.0
vbase_to_home.transform.translation.z = 0.5
vbase_to_home.transform.rotation.w = 0.0
vbase_to_home.transform.rotation.x = -1.0
vbase_to_home.transform.rotation.y = 0.0
vbase_to_home.transform.rotation.z = 0.0

tf_publisher = StaticTransformBroadcaster(node)
tf_publisher.sendTransform(vbase_to_home)
rclpy.spin(node)
"""