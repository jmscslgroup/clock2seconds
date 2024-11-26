#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "clock2seconds_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block clock2seconds/Subscribe
extern SimulinkSubscriber<std_msgs::Time, SL_Bus_clock2seconds_std_msgs_Time> Sub_clock2seconds_2;

// For Block clock2seconds/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_clock2seconds_std_msgs_Float64> Pub_clock2seconds_4;

void slros_node_init(int argc, char** argv);

#endif
