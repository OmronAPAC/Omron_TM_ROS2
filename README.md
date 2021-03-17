# __Omron_TM_ROS2__

![image](https://user-images.githubusercontent.com/42372488/110917109-806c3a00-8354-11eb-800e-7d777c1e0f41.png)

**For details on the packages' inner workings, see the [Developer's Guide](https://github.com/guanyewtan/Omron_TM_ROS2/blob/master/docs/DeveloperGuide.adoc).**

## __Overview__
This package contains the TM ROS 2 Drivers developed by Techman Robotics as well as python scripts to run a pick and place program on the TM5 robot.


## __Limitations__
The TM drivers, although able to access camera feed, is unable to run vision jobs, therefore this package is unable to do so. What this package does is to  exit the listen node (Fig XXX) to start a vision job within the TMFlow program, then re-enter the listen node.

## __References__
- Software Manual TMflow SW1.82, 19888-400 RevH
- Software Manual TMvision, 19888-600 RevF
- TM Expression Editor and Listen Node Reference Guide, 19888-700 RevC
- [TechManRobotInc ROS2](https://github.com/TechmanRobotInc/tmr_ros2)