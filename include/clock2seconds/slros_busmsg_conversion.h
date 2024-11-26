#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <ros/time.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Time.h>
#include "clock2seconds_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(ros::Time* msgPtr, SL_Bus_clock2seconds_ros_time_Time const* busPtr);
void convertToBus(SL_Bus_clock2seconds_ros_time_Time* busPtr, ros::Time const* msgPtr);

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_clock2seconds_std_msgs_Float64 const* busPtr);
void convertToBus(SL_Bus_clock2seconds_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr);

void convertFromBus(std_msgs::Time* msgPtr, SL_Bus_clock2seconds_std_msgs_Time const* busPtr);
void convertToBus(SL_Bus_clock2seconds_std_msgs_Time* busPtr, std_msgs::Time const* msgPtr);


#endif
