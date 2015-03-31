#include "ros/ros.h"
#include "std_msgs/Int8.h"
int main(int argc, char **argv)
{
  ros::init(argc, argv, "talk");
  ros::NodeHandle n;
   ros::Publisher pub = n.advertise<std_msgs::Int8>("topic_numbers", 1000);
 ros::Rate loop_rate(10);
  int count = 0;
  while (ros::ok())
  {
    std_msgs::Int8 msg;
    msg.data = count;
    pub.publish(msg);
    ros::spinOnce();
    loop_rate.sleep();
    ++count;
  }
  return 0;
}
