// Generated by gencpp from file srrg_core_ros/CloudMsg.msg
// DO NOT EDIT!


#ifndef SRRG_CORE_ROS_MESSAGE_CLOUDMSG_H
#define SRRG_CORE_ROS_MESSAGE_CLOUDMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <srrg_core_ros/RichPointMsg.h>

namespace srrg_core_ros
{
template <class ContainerAllocator>
struct CloudMsg_
{
  typedef CloudMsg_<ContainerAllocator> Type;

  CloudMsg_()
    : points()  {
    }
  CloudMsg_(const ContainerAllocator& _alloc)
    : points(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::srrg_core_ros::RichPointMsg_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::srrg_core_ros::RichPointMsg_<ContainerAllocator> >::other >  _points_type;
  _points_type points;




  typedef boost::shared_ptr< ::srrg_core_ros::CloudMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::srrg_core_ros::CloudMsg_<ContainerAllocator> const> ConstPtr;

}; // struct CloudMsg_

typedef ::srrg_core_ros::CloudMsg_<std::allocator<void> > CloudMsg;

typedef boost::shared_ptr< ::srrg_core_ros::CloudMsg > CloudMsgPtr;
typedef boost::shared_ptr< ::srrg_core_ros::CloudMsg const> CloudMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::srrg_core_ros::CloudMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::srrg_core_ros::CloudMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace srrg_core_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'srrg_core_ros': ['/home/serena/catkin_ws/src/srrg_core_ros/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::srrg_core_ros::CloudMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::srrg_core_ros::CloudMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::srrg_core_ros::CloudMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::srrg_core_ros::CloudMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::srrg_core_ros::CloudMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::srrg_core_ros::CloudMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::srrg_core_ros::CloudMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d658c7b8c6bf89babd2dfd35e61083ce";
  }

  static const char* value(const ::srrg_core_ros::CloudMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd658c7b8c6bf89baULL;
  static const uint64_t static_value2 = 0xbd2dfd35e61083ceULL;
};

template<class ContainerAllocator>
struct DataType< ::srrg_core_ros::CloudMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "srrg_core_ros/CloudMsg";
  }

  static const char* value(const ::srrg_core_ros::CloudMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::srrg_core_ros::CloudMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#RawCloud msg s simple float32 collection of rich points\n\
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

  static const char* value(const ::srrg_core_ros::CloudMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::srrg_core_ros::CloudMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CloudMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::srrg_core_ros::CloudMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::srrg_core_ros::CloudMsg_<ContainerAllocator>& v)
  {
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::srrg_core_ros::RichPointMsg_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SRRG_CORE_ROS_MESSAGE_CLOUDMSG_H
