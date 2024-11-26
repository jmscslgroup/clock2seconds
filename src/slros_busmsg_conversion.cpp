#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_clock2seconds_ros_time_Time and ros::Time

void convertFromBus(ros::Time* msgPtr, SL_Bus_clock2seconds_ros_time_Time const* busPtr)
{
  const std::string rosMessageType("ros_time/Time");

  msgPtr->nsec =  busPtr->Nsec;
  msgPtr->sec =  busPtr->Sec;
}

void convertToBus(SL_Bus_clock2seconds_ros_time_Time* busPtr, ros::Time const* msgPtr)
{
  const std::string rosMessageType("ros_time/Time");

  busPtr->Nsec =  msgPtr->nsec;
  busPtr->Sec =  msgPtr->sec;
}


// Conversions between SL_Bus_clock2seconds_std_msgs_Float64 and std_msgs::Float64

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_clock2seconds_std_msgs_Float64 const* busPtr)
{
  const std::string rosMessageType("std_msgs/Float64");

  msgPtr->data =  busPtr->Data;
}

void convertToBus(SL_Bus_clock2seconds_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Float64");

  busPtr->Data =  msgPtr->data;
}


// Conversions between SL_Bus_clock2seconds_std_msgs_Time and std_msgs::Time

void convertFromBus(std_msgs::Time* msgPtr, SL_Bus_clock2seconds_std_msgs_Time const* busPtr)
{
  const std::string rosMessageType("std_msgs/Time");

  convertFromBus(&msgPtr->data, &busPtr->Data);
}

void convertToBus(SL_Bus_clock2seconds_std_msgs_Time* busPtr, std_msgs::Time const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Time");

  convertToBus(&busPtr->Data, &msgPtr->data);
}

