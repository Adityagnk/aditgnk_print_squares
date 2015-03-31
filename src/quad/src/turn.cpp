#include <iostream>
#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "nav_msgs/Odometry.h"
#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;
float z_v=0.0;
float z_val = 0.0;
float z_init=0;
void subCallback(nav_msgs::Odometry msg)
	{
		z_v=z_val;
            z_val= msg.pose.pose.orientation.z;
		if(z_val>0)
		{
			if(z_val-z_v<0.000000)
				{
				z_val=2-z_val;
			}
		}
	    ROS_INFO("z : [%lf] , w : [%lf] \n", msg.pose.pose.orientation.z, msg.pose.pose.orientation.w);
	    cout << z_val<< endl;
	}
int main(int argc, char **argv)
{
ros::init(argc, argv, "publisher");
ros::NodeHandle node;
ros::Publisher pub=node.advertise<geometry_msgs::Twist>("/robot4/cmd_vel", 1000);
ros::Subscriber sub = node.subscribe<nav_msgs::Odometry>("/robot4/odom", 10, subCallback);
ros::Rate loop_rate(10);
int count = 0;
ros::Time begin=ros::Time::now();
ros::Duration twenty(10.0);
geometry_msgs::Twist newSpeed;
while (ros::ok())
{
	ros::Time present=ros::Time::now();
	if((present-begin)<twenty)
	{
		newSpeed.linear.x=1.0;
		newSpeed.linear.y=0.0;
		newSpeed.linear.z=0.0;
		newSpeed.angular.x=0.0;
		newSpeed.angular.y=0.0;
		newSpeed.angular.z=0.0;
		pub.publish(newSpeed);
		ros::spinOnce();
		loop_rate.sleep();
	}
	else
	{
		if(abs(z_val)-abs(z_init) < PI/10.0 )
		{	
			newSpeed.linear.x=0.0;
			newSpeed.linear.y=0.0;
			newSpeed.linear.z=0.0;
			newSpeed.angular.x=0.0;
			newSpeed.angular.y=0.0;
			newSpeed.angular.z=-0.3;
		}
		else
		{		
		begin=ros::Time::now();
		z_init=z_val;
		}
	pub.publish(newSpeed);
	ros::spinOnce();
	loop_rate.sleep();
	}
}
/*
while(ros::ok())
{
		ros::Time present=ros::Time::now();
		newSpeed.linear.x=0.0;
		newSpeed.linear.y=0.0;
		newSpeed.linear.z=0.0;
		newSpeed.angular.x=0.0;
		newSpeed.angular.y=0.0;
		newSpeed.angular.z=0.5;
		cout << " begin Time now : " << begin.sec <<".." << begin.nsec << endl;
		cout << " present Time now : " << present.sec << ".." << begin.nsec << endl;
		cout << " " <<endl;
		pub.publish(newSpeed);
		ros::spinOnce();
		loop_rate.sleep();
}*/
return 0;
}
