// Generated by gencpp from file bebop_msgs/CommonAudioStateAudioStreamingRunning.msg
// DO NOT EDIT!


#ifndef BEBOP_MSGS_MESSAGE_COMMONAUDIOSTATEAUDIOSTREAMINGRUNNING_H
#define BEBOP_MSGS_MESSAGE_COMMONAUDIOSTATEAUDIOSTREAMINGRUNNING_H


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
struct CommonAudioStateAudioStreamingRunning_
{
  typedef CommonAudioStateAudioStreamingRunning_<ContainerAllocator> Type;

  CommonAudioStateAudioStreamingRunning_()
    : header()
    , running(0)  {
    }
  CommonAudioStateAudioStreamingRunning_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , running(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _running_type;
  _running_type running;




  typedef boost::shared_ptr< ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> const> ConstPtr;

}; // struct CommonAudioStateAudioStreamingRunning_

typedef ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<std::allocator<void> > CommonAudioStateAudioStreamingRunning;

typedef boost::shared_ptr< ::bebop_msgs::CommonAudioStateAudioStreamingRunning > CommonAudioStateAudioStreamingRunningPtr;
typedef boost::shared_ptr< ::bebop_msgs::CommonAudioStateAudioStreamingRunning const> CommonAudioStateAudioStreamingRunningConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c32c9979998ec419afee553d1e1e2e03";
  }

  static const char* value(const ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc32c9979998ec419ULL;
  static const uint64_t static_value2 = 0xafee553d1e1e2e03ULL;
};

template<class ContainerAllocator>
struct DataType< ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebop_msgs/CommonAudioStateAudioStreamingRunning";
  }

  static const char* value(const ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CommonAudioStateAudioStreamingRunning\n\
# auto-generated from up stream XML files at\n\
#   github.com/Parrot-Developers/libARCommands/tree/master/Xml\n\
# To check upstream commit hash, refer to last_build_info file\n\
# Do not modify this file by hand. Check scripts/meta folder for generator files.\n\
#\n\
# SDK Comment: Audio stream direction.\n\
\n\
Header header\n\
\n\
# Bit field for TX and RX running bit 0 is 1 if Drone TX is running bit 1 is 1 if Drone RX is running\n\
uint8 running\n\
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

  static const char* value(const ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.running);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommonAudioStateAudioStreamingRunning_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bebop_msgs::CommonAudioStateAudioStreamingRunning_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "running: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.running);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEBOP_MSGS_MESSAGE_COMMONAUDIOSTATEAUDIOSTREAMINGRUNNING_H
