// Generated by gencpp from file tum_ardrone/SetStayTimeRequest.msg
// DO NOT EDIT!


#ifndef TUM_ARDRONE_MESSAGE_SETSTAYTIMEREQUEST_H
#define TUM_ARDRONE_MESSAGE_SETSTAYTIMEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tum_ardrone
{
template <class ContainerAllocator>
struct SetStayTimeRequest_
{
  typedef SetStayTimeRequest_<ContainerAllocator> Type;

  SetStayTimeRequest_()
    : duration(0.0)  {
    }
  SetStayTimeRequest_(const ContainerAllocator& _alloc)
    : duration(0.0)  {
    }



   typedef float _duration_type;
  _duration_type duration;




  typedef boost::shared_ptr< ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetStayTimeRequest_

typedef ::tum_ardrone::SetStayTimeRequest_<std::allocator<void> > SetStayTimeRequest;

typedef boost::shared_ptr< ::tum_ardrone::SetStayTimeRequest > SetStayTimeRequestPtr;
typedef boost::shared_ptr< ::tum_ardrone::SetStayTimeRequest const> SetStayTimeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tum_ardrone

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'tum_ardrone': ['/home/aditya/catkin_ws/src/Quadcopter/tum_ardrone/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f17ffa2323e97e44a94d55c2699df849";
  }

  static const char* value(const ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf17ffa2323e97e44ULL;
  static const uint64_t static_value2 = 0xa94d55c2699df849ULL;
};

template<class ContainerAllocator>
struct DataType< ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tum_ardrone/SetStayTimeRequest";
  }

  static const char* value(const ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
float32 duration\n\
";
  }

  static const char* value(const ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SetStayTimeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tum_ardrone::SetStayTimeRequest_<ContainerAllocator>& v)
  {
    s << indent << "duration: ";
    Printer<float>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUM_ARDRONE_MESSAGE_SETSTAYTIMEREQUEST_H
