#include "ros/ros.h"
#include "std_msgs/Int8.h"
#include <iostream>
using namespace std;
int sqr=0;
void subCallback(std_msgs::Int8 msg1)
	{
		int n;
		n=msg1.data;
		sqr=n*n;
	ROS_INFO("The topic is topic_squares and the number is %d \n",msg1.data);
	}
int main(int argc, char **argv)
{
  ros::init(argc, argv, "talk");
  ros::NodeHandle n1;
   ros::Publisher pub = n1.advertise<std_msgs::Int8>("topic_squares", 1000);
ros::Subscriber sub = n1.subscribe<std_msgs::Int8>("topic_numbers", 10, subCallback);
 ros::Rate loop_rate(10);
  while (ros::ok())
  {
    std_msgs::Int8 msg;
    msg.data = sqr;
    pub.publish(msg);
    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}
