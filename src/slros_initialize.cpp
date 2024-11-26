#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "clock2seconds";

// For Block clock2seconds/Subscribe
SimulinkSubscriber<std_msgs::Time, SL_Bus_clock2seconds_std_msgs_Time> Sub_clock2seconds_2;

// For Block clock2seconds/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_clock2seconds_std_msgs_Float64> Pub_clock2seconds_4;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

