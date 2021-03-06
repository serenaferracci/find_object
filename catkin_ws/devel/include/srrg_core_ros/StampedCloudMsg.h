// Generated by gencpp from file srrg_core_ros/StampedCloudMsg.msg
// DO NOT EDIT!


#ifndef SRRG_CORE_ROS_MESSAGE_STAMPEDCLOUDMSG_H
#define SRRG_CORE_ROS_MESSAGE_STAMPEDCLOUDMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <srrg_core_ros/CloudMsg.h>

namespace srrg_core_ros
{
template <class ContainerAllocator>
struct StampedCloudMsg_
{
  typedef StampedCloudMsg_<ContainerAllocator> Type;

  StampedCloudMsg_()
    : header()
    , cloud()  {
    }
  StampedCloudMsg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , cloud(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::srrg_core_ros::CloudMsg_<ContainerAllocator>  _cloud_type;
  _cloud_type cloud;




  typedef boost::shared_ptr< ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> const> ConstPtr;

}; // struct StampedCloudMsg_

typedef ::srrg_core_ros::StampedCloudMsg_<std::allocator<void> > StampedCloudMsg;

typedef boost::shared_ptr< ::srrg_core_ros::StampedCloudMsg > StampedCloudMsgPtr;
typedef boost::shared_ptr< ::srrg_core_ros::StampedCloudMsg const> StampedCloudMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace srrg_core_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'srrg_core_ros': ['/home/serena/catkin_ws/src/srrg_core_ros/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dda9aa0382bcc16b522a22ce9cda26e5";
  }

  static const char* value(const ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdda9aa0382bcc16bULL;
  static const uint64_t static_value2 = 0x522a22ce9cda26e5ULL;
};

template<class ContainerAllocator>
struct DataType< ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "srrg_core_ros/StampedCloudMsg";
  }

  static const char* value(const ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#  cloud with header and frame id\n\
Header header\n\
CloudMsg cloud				\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: srrg_core_ros/CloudMsg\n\
#RawCloud msg s simple float32 collection of rich points\n\
RichPointMsg[] points\n\
================================================================================\n\
MSG: srrg_core_ros/RichPointMsg\n\
# rich point message, a point  with normal and confidence\n\
geometry_msgs/Point32 point\n\
geometry_msgs/Point32 normal\n\
geometry_msgs/Point32 rgb\n\
float32 accumulator\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
";
  }

  static const char* value(const ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.cloud);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StampedCloudMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::srrg_core_ros::StampedCloudMsg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cloud: ";
    s << std::endl;
    Printer< ::srrg_core_ros::CloudMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.cloud);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SRRG_CORE_ROS_MESSAGE_STAMPEDCLOUDMSG_H
