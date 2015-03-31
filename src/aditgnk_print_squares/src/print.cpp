#include "ros/ros.h"
#include "std_msgs/Int8.h"
#include <iostream>
using namespace std;
void subCallback1(std_msgs::Int8 msg1)
	{
		ROS_INFO("The topic is topic_numbers and the number is %d \n",msg1.data);
	}
void subCallback2(std_msgs::Int8 msg2)
	{
		ROS_INFO("The topic is topic_squares and the number is %d \n",msg2.data);
	}
int main(int argc, char **argv)
{
  ros::init(argc, argv, "talk");
  ros::NodeHandle n2;
ros::Subscriber sub1 = n2.subscribe<std_msgs::Int8>("topic_numbers", 10, subCallback1);
ros::Subscriber sub2= n2.subscribe<std_msgs::Int8>("topic_squares", 10, subCallback2);
 ros::Rate loop_rate(10);
  while (ros::ok())
  {
    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}
