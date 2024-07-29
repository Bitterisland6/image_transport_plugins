// Copyright (c) 2012, Willow Garage, Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//    * Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//
//    * Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in the
//      documentation and/or other materials provided with the distribution.
//
//    * Neither the name of the copyright holder nor the names of its
//      contributors may be used to endorse or promote products derived from
//      this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.


#ifndef COMPRESSED_IMAGE_TRANSPORT__COMPRESSION_COMMON_HPP_
#define COMPRESSED_IMAGE_TRANSPORT__COMPRESSION_COMMON_HPP_

#include <rclcpp/parameter_value.hpp>
#include <rcl_interfaces/msg/parameter_descriptor.hpp>

namespace compressed_image_transport
{

// Compression formats
enum compressionFormat
{
  UNDEFINED = -1,
  JPEG = 0,
  PNG = 1,
  TIFF = 2,
};

using ParameterDescriptor = rcl_interfaces::msg::ParameterDescriptor;
using ParameterValue = rclcpp::ParameterValue;

struct ParameterDefinition
{
  const ParameterValue defaultValue;
  const ParameterDescriptor descriptor;
};

}  // namespace compressed_image_transport

#endif  // COMPRESSED_IMAGE_TRANSPORT__COMPRESSION_COMMON_HPP_