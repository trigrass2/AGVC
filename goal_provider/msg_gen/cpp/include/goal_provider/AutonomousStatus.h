/* Auto-generated by genmsg_cpp for file /home/enda/fuerte_workspace/sandbox/goal_provider/msg/AutonomousStatus.msg */
#ifndef GOAL_PROVIDER_MESSAGE_AUTONOMOUSSTATUS_H
#define GOAL_PROVIDER_MESSAGE_AUTONOMOUSSTATUS_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "geometry_msgs/Point.h"
#include "std_msgs/String.h"

namespace goal_provider
{
template <class ContainerAllocator>
struct AutonomousStatus_ {
  typedef AutonomousStatus_<ContainerAllocator> Type;

  AutonomousStatus_()
  : header()
  , goal()
  , status(0)
  , text()
  {
  }

  AutonomousStatus_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , goal(_alloc)
  , status(0)
  , text(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _goal_type;
   ::geometry_msgs::Point_<ContainerAllocator>  goal;

  typedef uint8_t _status_type;
  uint8_t status;

  typedef  ::std_msgs::String_<ContainerAllocator>  _text_type;
   ::std_msgs::String_<ContainerAllocator>  text;

  enum { ACTIVE = 1 };
  enum { WAITING = 2 };
  enum { REJECTED = 3 };
  enum { ABORTED = 4 };
  enum { REACHED = 5 };
  enum { LOST = 6 };
  enum { PREEMPTED = 7 };
  enum { UPDATING = 8 };
  enum { ERROR = 9 };
  enum { INFO = 10 };

  typedef boost::shared_ptr< ::goal_provider::AutonomousStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::goal_provider::AutonomousStatus_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct AutonomousStatus
typedef  ::goal_provider::AutonomousStatus_<std::allocator<void> > AutonomousStatus;

typedef boost::shared_ptr< ::goal_provider::AutonomousStatus> AutonomousStatusPtr;
typedef boost::shared_ptr< ::goal_provider::AutonomousStatus const> AutonomousStatusConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::goal_provider::AutonomousStatus_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::goal_provider::AutonomousStatus_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace goal_provider

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::goal_provider::AutonomousStatus_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::goal_provider::AutonomousStatus_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::goal_provider::AutonomousStatus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ea7b197e2bb17b8ba245241eff172721";
  }

  static const char* value(const  ::goal_provider::AutonomousStatus_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xea7b197e2bb17b8bULL;
  static const uint64_t static_value2 = 0xa245241eff172721ULL;
};

template<class ContainerAllocator>
struct DataType< ::goal_provider::AutonomousStatus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "goal_provider/AutonomousStatus";
  }

  static const char* value(const  ::goal_provider::AutonomousStatus_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::goal_provider::AutonomousStatus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
geometry_msgs/Point goal            #The goal we are heading to\n\
\n\
uint8 status\n\
  uint8 ACTIVE    = 1            #We are actively heading to a goal\n\
  uint8 WAITING   = 2            #We are waiting for a goal to be accepted by move_base\n\
  uint8 REJECTED  = 3            #Movebase rejected our goal\n\
  uint8 ABORTED   = 4            #Movebase aborted our goal\n\
  uint8 REACHED   = 5            #We have reached the goal and can start planning for the next one\n\
  uint8 LOST      = 6            #We are lost and don't know what is happening anymore. This is terminal\n\
  uint8 PREEMPTED = 7            #Another goal took priority over this one\n\
  uint8 UPDATING  = 8            #Updating the goal or not\n\
  uint8 ERROR     = 9            #Goal provider has gone gammy\n\
  uint8 INFO      = 10           #INFO message\n\
\n\
std_msgs/String text                         #For extra information\n\
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
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
\n\
";
  }

  static const char* value(const  ::goal_provider::AutonomousStatus_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::goal_provider::AutonomousStatus_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::goal_provider::AutonomousStatus_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::goal_provider::AutonomousStatus_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.goal);
    stream.next(m.status);
    stream.next(m.text);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AutonomousStatus_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::goal_provider::AutonomousStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::goal_provider::AutonomousStatus_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "text: ";
s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.text);
  }
};


} // namespace message_operations
} // namespace ros

#endif // GOAL_PROVIDER_MESSAGE_AUTONOMOUSSTATUS_H

