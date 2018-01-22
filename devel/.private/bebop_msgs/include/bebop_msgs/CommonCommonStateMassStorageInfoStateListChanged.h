// Generated by gencpp from file bebop_msgs/CommonCommonStateMassStorageInfoStateListChanged.msg
// DO NOT EDIT!


#ifndef BEBOP_MSGS_MESSAGE_COMMONCOMMONSTATEMASSSTORAGEINFOSTATELISTCHANGED_H
#define BEBOP_MSGS_MESSAGE_COMMONCOMMONSTATEMASSSTORAGEINFOSTATELISTCHANGED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace bebop_msgs
{
template <class ContainerAllocator>
struct CommonCommonStateMassStorageInfoStateListChanged_
{
  typedef CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> Type;

  CommonCommonStateMassStorageInfoStateListChanged_()
    : header()
    , mass_storage_id(0)
    , size(0)
    , used_size(0)
    , plugged(0)
    , full(0)
    , internal(0)  {
    }
  CommonCommonStateMassStorageInfoStateListChanged_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , mass_storage_id(0)
    , size(0)
    , used_size(0)
    , plugged(0)
    , full(0)
    , internal(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _mass_storage_id_type;
  _mass_storage_id_type mass_storage_id;

   typedef uint32_t _size_type;
  _size_type size;

   typedef uint32_t _used_size_type;
  _used_size_type used_size;

   typedef uint8_t _plugged_type;
  _plugged_type plugged;

   typedef uint8_t _full_type;
  _full_type full;

   typedef uint8_t _internal_type;
  _internal_type internal;




  typedef boost::shared_ptr< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> const> ConstPtr;

}; // struct CommonCommonStateMassStorageInfoStateListChanged_

typedef ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<std::allocator<void> > CommonCommonStateMassStorageInfoStateListChanged;

typedef boost::shared_ptr< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged > CommonCommonStateMassStorageInfoStateListChangedPtr;
typedef boost::shared_ptr< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged const> CommonCommonStateMassStorageInfoStateListChangedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bebop_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
<<<<<<< HEAD
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'bebop_msgs': ['/home/chahatdeep/bebop_ws/src/bebop_autonomy/bebop_msgs/msg']}
=======
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'bebop_msgs': ['/home/dronelaptop/bebop_ws/src/bebop_autonomy/bebop_msgs/msg']}
>>>>>>> f834c4515e8cc313d37640e4cacaaf3de5c3f16c

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2ca92d7dc2cd357b6c1f89b1084ed001";
  }

  static const char* value(const ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2ca92d7dc2cd357bULL;
  static const uint64_t static_value2 = 0x6c1f89b1084ed001ULL;
};

template<class ContainerAllocator>
struct DataType< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebop_msgs/CommonCommonStateMassStorageInfoStateListChanged";
  }

  static const char* value(const ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CommonCommonStateMassStorageInfoStateListChanged\n\
# auto-generated from up stream XML files at\n\
#   github.com/Parrot-Developers/libARCommands/tree/master/Xml\n\
# To check upstream commit hash, refer to last_build_info file\n\
# Do not modify this file by hand. Check scripts/meta folder for generator files.\n\
#\n\
# SDK Comment: Mass storage info state list.\n\
\n\
Header header\n\
\n\
# Mass storage state id (unique)\n\
uint8 mass_storage_id\n\
# Mass storage size in MBytes\n\
uint32 size\n\
# Mass storage used size in MBytes\n\
uint32 used_size\n\
# Mass storage plugged (1 if mass storage is plugged, otherwise 0)\n\
uint8 plugged\n\
# Mass storage full information state (1 if mass storage full, 0 otherwise).\n\
uint8 full\n\
# Mass storage internal type state (1 if mass storage is internal, 0 otherwise)\n\
uint8 internal\n\
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
";
  }

  static const char* value(const ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.mass_storage_id);
      stream.next(m.size);
      stream.next(m.used_size);
      stream.next(m.plugged);
      stream.next(m.full);
      stream.next(m.internal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommonCommonStateMassStorageInfoStateListChanged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bebop_msgs::CommonCommonStateMassStorageInfoStateListChanged_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "mass_storage_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mass_storage_id);
    s << indent << "size: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.size);
    s << indent << "used_size: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.used_size);
    s << indent << "plugged: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.plugged);
    s << indent << "full: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.full);
    s << indent << "internal: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.internal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEBOP_MSGS_MESSAGE_COMMONCOMMONSTATEMASSSTORAGEINFOSTATELISTCHANGED_H
