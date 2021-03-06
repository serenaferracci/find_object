// Generated by gencpp from file srrg_core_ros/MapNodeMsg.msg
// DO NOT EDIT!


#ifndef SRRG_CORE_ROS_MESSAGE_MAPNODEMSG_H
#define SRRG_CORE_ROS_MESSAGE_MAPNODEMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace srrg_core_ros
{
template <class ContainerAllocator>
struct MapNodeMsg_
{
  typedef MapNodeMsg_<ContainerAllocator> Type;

  MapNodeMsg_()
    : id(0)
    , timestamp(0.0)
    , transform()
    , parents()  {
    }
  MapNodeMsg_(const ContainerAllocator& _alloc)
    : id(0)
    , timestamp(0.0)
    , transform(_alloc)
    , parents(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef double _timestamp_type;
  _timestamp_type timestamp;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _transform_type;
  _transform_type transform;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _parents_type;
  _parents_type parents;




  typedef boost::shared_ptr< ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> const> ConstPtr;

}; // struct MapNodeMsg_

typedef ::srrg_core_ros::MapNodeMsg_<std::allocator<void> > MapNodeMsg;

typedef boost::shared_ptr< ::srrg_core_ros::MapNodeMsg > MapNodeMsgPtr;
typedef boost::shared_ptr< ::srrg_core_ros::MapNodeMsg const> MapNodeMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b4dfc7503338e0289ba1dfed1cad276b";
  }

  static const char* value(const ::srrg_core_ros::MapNodeMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb4dfc7503338e028ULL;
  static const uint64_t static_value2 = 0x9ba1dfed1cad276bULL;
};

template<class ContainerAllocator>
struct DataType< ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "srrg_core_ros/MapNodeMsg";
  }

  static const char* value(const ::srrg_core_ros::MapNodeMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n\
float64 timestamp\n\
geometry_msgs/Pose transform\n\
int32[] parents\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::srrg_core_ros::MapNodeMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.timestamp);
      stream.next(m.transform);
      stream.next(m.parents);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MapNodeMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::srrg_core_ros::MapNodeMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::srrg_core_ros::MapNodeMsg_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "timestamp: ";
    Printer<double>::stream(s, indent + "  ", v.timestamp);
    s << indent << "transform: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.transform);
    s << indent << "parents[]" << std::endl;
    for (size_t i = 0; i < v.parents.size(); ++i)
    {
      s << indent << "  parents[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.parents[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SRRG_CORE_ROS_MESSAGE_MAPNODEMSG_H
