#! /usr/bin/env python

import math
from tf.transformations import euler_from_quaternion, quaternion_from_euler
import sys
import copy
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg

moveit_commander.roscpp_initialize(sys.argv)
rospy.init_node('ur5e_node', anonymous=True)

robot = moveit_commander.RobotCommander()
scene = moveit_commander.PlanningSceneInterface()    
group = moveit_commander.MoveGroupCommander("manipulator")

pose_target = geometry_msgs.msg.Pose()
pose_target.position.x = -0.3
pose_target.position.y = 0.5
pose_target.position.z = 0.5
r=math.radians(0)
p=math.radians(0)
w=math.radians(0)
quat1=quaternion_from_euler(r,p,w)

pose_target.orientation.x = quat1[0]
pose_target.orientation.y = quat1[1]
pose_target.orientation.z = quat1[2]
pose_target.orientation.w = quat1[3]
group.set_pose_target(pose_target)

plan1 = group.plan()

rospy.sleep(1)
group.go(wait=True)
rospy.sleep(1)

print ("Current Pose:")
pose_target2=group.get_current_pose()
qx=round(pose_target2.pose.orientation.x,2)
qy=round(pose_target2.pose.orientation.y,2)
qz=round(pose_target2.pose.orientation.z,2)
qw=round(pose_target2.pose.orientation.w,2)
print ("x = "+str(round(pose_target2.pose.position.x,1)))
print ("y = "+str(round(pose_target2.pose.position.y,1)))
print ("z = "+str(round(pose_target2.pose.position.z,1)))
print ("qx = "+str(qx))
print ("qy = "+str(qy))
print ("qz = "+str(qz))
print ("qw = "+str(qw))
quat2=[qx, qy, qz, qw]
(roll, pitch, yaw)=euler_from_quaternion(quat2)
print ("roll = "+str(math.degrees(roll)))
print ("pitch = "+str(math.degrees(pitch)))
print ("yaw = "+str(math.degrees(yaw)))

moveit_commander.roscpp_shutdown()