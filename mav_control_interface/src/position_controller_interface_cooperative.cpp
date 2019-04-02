/*
 * Copyright (c) 2015, Markus Achtelik, ASL, ETH Zurich, Switzerland
 * You can contact the author at <markus dot achtelik at mavt dot ethz dot ch>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <ros/ros.h>

#include <mav_control_interface/position_controller_interface_cooperative.h>

namespace mav_control_interface {

PositionControllerInterfaceCooperative::PositionControllerInterfaceCooperative() {

}

PositionControllerInterfaceCooperative::~PositionControllerInterfaceCooperative() {

}

bool PositionControllerInterfaceCooperative::setReferenceArray(
    const mav_msgs::EigenTrajectoryPointDeque& reference_array) {
  ROS_WARN_STREAM_THROTTLE(1, "setReferenceArray() not implemented for controller " << this->getName());
  return false;                           
}

// bool PositionControllerInterfaceCooperative::calculateRollPitchYawrateThrustCommand(
//     mav_msgs::EigenRollPitchYawrateThrust* attitude_thrust_command) {
//   ROS_WARN_STREAM_THROTTLE(1, "calculateRollPitchYawrateThrustCommand() not implemented for controller "
//                            << this->getName());
//   return false;
// }

// bool PositionControllerInterfaceCooperative::calculateAttitudeThrustCommand(
//     mav_msgs::EigenAttitudeThrust* attitude_thrust_command) {
//   ROS_WARN_STREAM_THROTTLE(1, "calculateAttitudeThrustCommand() not implemented for controller "
//                            << this->getName());
//   return false;
// }

bool PositionControllerInterfaceCooperative::calculateAttitudeThrustCommandCentralize(mav_msgs::EigenAttitudeThrust* thrust_command_quad1, 
      mav_msgs::EigenAttitudeThrust* thrust_command_quad2)
{
  ROS_WARN_STREAM_THROTTLE(1, "calculateAttitudeThrustCommand() not implemented for controller "
                           << this->getName());
  return false;  
}
bool PositionControllerInterfaceCooperative::setEncoder(const Eigen::Vector3d& encoder)
{
  ROS_WARN_STREAM_THROTTLE(1, "setEncoder() not implemented for controller "
                           << this->getName());
  return false;  
}
} /* namespace mav_flight_manager */