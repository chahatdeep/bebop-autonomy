// Generated by gencpp from file bebop_msgs/CommonChargerStateCurrentChargeStateChanged.msg
// DO NOT EDIT!


#ifndef BEBOP_MSGS_MESSAGE_COMMONCHARGERSTATECURRENTCHARGESTATECHANGED_H
#define BEBOP_MSGS_MESSAGE_COMMONCHARGERSTATECURRENTCHARGESTATECHANGED_H


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
struct CommonChargerStateCurrentChargeStateChanged_
{
  typedef CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> Type;

  CommonChargerStateCurrentChargeStateChanged_()
    : header()
    , status(0)
    , phase(0)  {
    }
  CommonChargerStateCurrentChargeStateChanged_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , status(0)
    , phase(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _status_type;
  _status_type status;

   typedef uint8_t _phase_type;
  _phase_type phase;


    enum { status_DISCHARGING = 0u };
     enum { status_CHARGING_SLOW = 1u };
     enum { status_CHARGING_MODERATE = 2u };
     enum { status_CHARGING_FAST = 3u };
     enum { status_BATTERY_FULL = 4u };
     enum { phase_UNKNOWN = 0u };
     enum { phase_CONSTANT_CURRENT_1 = 1u };
     enum { phase_CONSTANT_CURRENT_2 = 2u };
     enum { phase_CONSTANT_VOLTAGE = 3u };
     enum { phase_CHARGED = 4u };
 

  typedef boost::shared_ptr< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> const> ConstPtr;

}; // struct CommonChargerStateCurrentChargeStateChanged_

typedef ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<std::allocator<void> > CommonChargerStateCurrentChargeStateChanged;

typedef boost::shared_ptr< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged > CommonChargerStateCurrentChargeStateChangedPtr;
typedef boost::shared_ptr< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged const> CommonChargerStateCurrentChargeStateChangedConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "18629b25e8e73562aa089390b0f02505";
  }

  static const char* value(const ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x18629b25e8e73562ULL;
  static const uint64_t static_value2 = 0xaa089390b0f02505ULL;
};

template<class ContainerAllocator>
struct DataType< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebop_msgs/CommonChargerStateCurrentChargeStateChanged";
  }

  static const char* value(const ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CommonChargerStateCurrentChargeStateChanged\n\
# auto-generated from up stream XML files at\n\
#   github.com/Parrot-Developers/libARCommands/tree/master/Xml\n\
# To check upstream commit hash, refer to last_build_info file\n\
# Do not modify this file by hand. Check scripts/meta folder for generator files.\n\
#\n\
# SDK Comment: Current charge state.\n\
\n\
Header header\n\
\n\
# Charger status.\n\
uint8 status_DISCHARGING=0  # The battery is discharging.\n\
uint8 status_CHARGING_SLOW=1  # The battery is charging at a slow rate about 512 mA.\n\
uint8 status_CHARGING_MODERATE=2  # The battery is charging at a moderate rate (&gt; 512 mA) but slower than the fastest rate.\n\
uint8 status_CHARGING_FAST=3  # The battery is charging at a the fastest rate.\n\
uint8 status_BATTERY_FULL=4  # The charger is plugged and the battery is fully charged.\n\
uint8 status\n\
# The current charging phase.\n\
uint8 phase_UNKNOWN=0  # The charge phase is unknown or irrelevant.\n\
uint8 phase_CONSTANT_CURRENT_1=1  # First phase of the charging process. The battery is charging with constant current.\n\
uint8 phase_CONSTANT_CURRENT_2=2  # Second phase of the charging process. The battery is charging with constant current, with a higher voltage than the first phase.\n\
uint8 phase_CONSTANT_VOLTAGE=3  # Last part of the charging process. The battery is charging with a constant voltage.\n\
uint8 phase_CHARGED=4  # The battery is fully charged.\n\
uint8 phase\n\
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

  static const char* value(const ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.status);
      stream.next(m.phase);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommonChargerStateCurrentChargeStateChanged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bebop_msgs::CommonChargerStateCurrentChargeStateChanged_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "phase: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.phase);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEBOP_MSGS_MESSAGE_COMMONCHARGERSTATECURRENTCHARGESTATECHANGED_H
