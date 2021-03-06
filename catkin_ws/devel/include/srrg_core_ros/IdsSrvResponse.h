// Generated by gencpp from file srrg_core_ros/IdsSrvResponse.msg
// DO NOT EDIT!


#ifndef SRRG_CORE_ROS_MESSAGE_IDSSRVRESPONSE_H
#define SRRG_CORE_ROS_MESSAGE_IDSSRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace srrg_core_ros
{
template <class ContainerAllocator>
struct IdsSrvResponse_
{
  typedef IdsSrvResponse_<ContainerAllocator> Type;

  IdsSrvResponse_()
    : local_map_ids()  {
    }
  IdsSrvResponse_(const ContainerAllocator& _alloc)
    : local_map_ids(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _local_map_ids_type;
  _local_map_ids_type local_map_ids;




  typedef boost::shared_ptr< ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct IdsSrvResponse_

typedef ::srrg_core_ros::IdsSrvResponse_<std::allocator<void> > IdsSrvResponse;

typedef boost::shared_ptr< ::srrg_core_ros::IdsSrvResponse > IdsSrvResponsePtr;
typedef boost::shared_ptr< ::srrg_core_ros::IdsSrvResponse const> IdsSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a8cde7006a101b5bad3531b015ef87fb";
  }

  static const char* value(const ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa8cde7006a101b5bULL;
  static const uint64_t static_value2 = 0xad3531b015ef87fbULL;
};

template<class ContainerAllocator>
struct DataType< ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "srrg_core_ros/IdsSrvResponse";
  }

  static const char* value(const ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[] local_map_ids\n\
";
  }

  static const char* value(const ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.local_map_ids);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IdsSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::srrg_core_ros::IdsSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "local_map_ids[]" << std::endl;
    for (size_t i = 0; i < v.local_map_ids.size(); ++i)
    {
      s << indent << "  local_map_ids[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.local_map_ids[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SRRG_CORE_ROS_MESSAGE_IDSSRVRESPONSE_H
