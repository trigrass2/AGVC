/* Auto-generated by genmsg_cpp for file /home/rosbuild/hudson/workspace/doc-electric-p2os/doc_stacks/2013-03-01_16-19-23.450784/p2os/p2os_driver/msg/DIO.msg */
#ifndef P2OS_DRIVER_MESSAGE_DIO_H
#define P2OS_DRIVER_MESSAGE_DIO_H
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


namespace p2os_driver
{
template <class ContainerAllocator>
struct DIO_ {
  typedef DIO_<ContainerAllocator> Type;

  DIO_()
  : count(0)
  , bits(0)
  {
  }

  DIO_(const ContainerAllocator& _alloc)
  : count(0)
  , bits(0)
  {
  }

  typedef uint32_t _count_type;
  uint32_t count;

  typedef uint16_t _bits_type;
  uint16_t bits;


private:
  static const char* __s_getDataType_() { return "p2os_driver/DIO"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d375575ab5b2233ab16927780da5f856"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "uint32 count\n\
uint16 bits\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, count);
    ros::serialization::serialize(stream, bits);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, count);
    ros::serialization::deserialize(stream, bits);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(count);
    size += ros::serialization::serializationLength(bits);
    return size;
  }

  typedef boost::shared_ptr< ::p2os_driver::DIO_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::p2os_driver::DIO_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct DIO
typedef  ::p2os_driver::DIO_<std::allocator<void> > DIO;

typedef boost::shared_ptr< ::p2os_driver::DIO> DIOPtr;
typedef boost::shared_ptr< ::p2os_driver::DIO const> DIOConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::p2os_driver::DIO_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::p2os_driver::DIO_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace p2os_driver

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::p2os_driver::DIO_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::p2os_driver::DIO_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::p2os_driver::DIO_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d375575ab5b2233ab16927780da5f856";
  }

  static const char* value(const  ::p2os_driver::DIO_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd375575ab5b2233aULL;
  static const uint64_t static_value2 = 0xb16927780da5f856ULL;
};

template<class ContainerAllocator>
struct DataType< ::p2os_driver::DIO_<ContainerAllocator> > {
  static const char* value() 
  {
    return "p2os_driver/DIO";
  }

  static const char* value(const  ::p2os_driver::DIO_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::p2os_driver::DIO_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint32 count\n\
uint16 bits\n\
\n\
";
  }

  static const char* value(const  ::p2os_driver::DIO_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::p2os_driver::DIO_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::p2os_driver::DIO_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.count);
    stream.next(m.bits);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct DIO_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::p2os_driver::DIO_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::p2os_driver::DIO_<ContainerAllocator> & v) 
  {
    s << indent << "count: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.count);
    s << indent << "bits: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.bits);
  }
};


} // namespace message_operations
} // namespace ros

#endif // P2OS_DRIVER_MESSAGE_DIO_H
