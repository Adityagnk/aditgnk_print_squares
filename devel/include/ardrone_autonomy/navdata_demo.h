// Generated by gencpp from file ardrone_autonomy/navdata_demo.msg
// DO NOT EDIT!


#ifndef ARDRONE_AUTONOMY_MESSAGE_NAVDATA_DEMO_H
#define ARDRONE_AUTONOMY_MESSAGE_NAVDATA_DEMO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace ardrone_autonomy
{
template <class ContainerAllocator>
struct navdata_demo_
{
  typedef navdata_demo_<ContainerAllocator> Type;

  navdata_demo_()
    : header()
    , drone_time(0.0)
    , tag(0)
    , size(0)
    , ctrl_state(0)
    , vbat_flying_percentage(0)
    , theta(0.0)
    , phi(0.0)
    , psi(0.0)
    , altitude(0)
    , vx(0.0)
    , vy(0.0)
    , vz(0.0)
    , num_frames(0)
    , detection_camera_type(0)  {
    }
  navdata_demo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , drone_time(0.0)
    , tag(0)
    , size(0)
    , ctrl_state(0)
    , vbat_flying_percentage(0)
    , theta(0.0)
    , phi(0.0)
    , psi(0.0)
    , altitude(0)
    , vx(0.0)
    , vy(0.0)
    , vz(0.0)
    , num_frames(0)
    , detection_camera_type(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _drone_time_type;
  _drone_time_type drone_time;

   typedef uint16_t _tag_type;
  _tag_type tag;

   typedef uint16_t _size_type;
  _size_type size;

   typedef uint32_t _ctrl_state_type;
  _ctrl_state_type ctrl_state;

   typedef uint32_t _vbat_flying_percentage_type;
  _vbat_flying_percentage_type vbat_flying_percentage;

   typedef float _theta_type;
  _theta_type theta;

   typedef float _phi_type;
  _phi_type phi;

   typedef float _psi_type;
  _psi_type psi;

   typedef int32_t _altitude_type;
  _altitude_type altitude;

   typedef float _vx_type;
  _vx_type vx;

   typedef float _vy_type;
  _vy_type vy;

   typedef float _vz_type;
  _vz_type vz;

   typedef uint32_t _num_frames_type;
  _num_frames_type num_frames;

   typedef uint32_t _detection_camera_type_type;
  _detection_camera_type_type detection_camera_type;




  typedef boost::shared_ptr< ::ardrone_autonomy::navdata_demo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ardrone_autonomy::navdata_demo_<ContainerAllocator> const> ConstPtr;

}; // struct navdata_demo_

typedef ::ardrone_autonomy::navdata_demo_<std::allocator<void> > navdata_demo;

typedef boost::shared_ptr< ::ardrone_autonomy::navdata_demo > navdata_demoPtr;
typedef boost::shared_ptr< ::ardrone_autonomy::navdata_demo const> navdata_demoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ardrone_autonomy::navdata_demo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ardrone_autonomy::navdata_demo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ardrone_autonomy

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'ardrone_autonomy': ['/home/aditya/catkin_ws/src/Quadcopter/ardrone_autonomy/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ardrone_autonomy::navdata_demo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ardrone_autonomy::navdata_demo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ardrone_autonomy::navdata_demo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ardrone_autonomy::navdata_demo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ardrone_autonomy::navdata_demo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ardrone_autonomy::navdata_demo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ardrone_autonomy::navdata_demo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5f569653293c884e2ea43f113057d0ea";
  }

  static const char* value(const ::ardrone_autonomy::navdata_demo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5f569653293c884eULL;
  static const uint64_t static_value2 = 0x2ea43f113057d0eaULL;
};

template<class ContainerAllocator>
struct DataType< ::ardrone_autonomy::navdata_demo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ardrone_autonomy/navdata_demo";
  }

  static const char* value(const ::ardrone_autonomy::navdata_demo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ardrone_autonomy::navdata_demo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float64 drone_time\n\
uint16 tag\n\
uint16 size\n\
uint32 ctrl_state\n\
uint32 vbat_flying_percentage\n\
float32 theta\n\
float32 phi\n\
float32 psi\n\
int32 altitude\n\
float32 vx\n\
float32 vy\n\
float32 vz\n\
uint32 num_frames\n\
uint32 detection_camera_type\n\
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

  static const char* value(const ::ardrone_autonomy::navdata_demo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ardrone_autonomy::navdata_demo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.drone_time);
      stream.next(m.tag);
      stream.next(m.size);
      stream.next(m.ctrl_state);
      stream.next(m.vbat_flying_percentage);
      stream.next(m.theta);
      stream.next(m.phi);
      stream.next(m.psi);
      stream.next(m.altitude);
      stream.next(m.vx);
      stream.next(m.vy);
      stream.next(m.vz);
      stream.next(m.num_frames);
      stream.next(m.detection_camera_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct navdata_demo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ardrone_autonomy::navdata_demo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ardrone_autonomy::navdata_demo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "drone_time: ";
    Printer<double>::stream(s, indent + "  ", v.drone_time);
    s << indent << "tag: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.tag);
    s << indent << "size: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.size);
    s << indent << "ctrl_state: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ctrl_state);
    s << indent << "vbat_flying_percentage: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.vbat_flying_percentage);
    s << indent << "theta: ";
    Printer<float>::stream(s, indent + "  ", v.theta);
    s << indent << "phi: ";
    Printer<float>::stream(s, indent + "  ", v.phi);
    s << indent << "psi: ";
    Printer<float>::stream(s, indent + "  ", v.psi);
    s << indent << "altitude: ";
    Printer<int32_t>::stream(s, indent + "  ", v.altitude);
    s << indent << "vx: ";
    Printer<float>::stream(s, indent + "  ", v.vx);
    s << indent << "vy: ";
    Printer<float>::stream(s, indent + "  ", v.vy);
    s << indent << "vz: ";
    Printer<float>::stream(s, indent + "  ", v.vz);
    s << indent << "num_frames: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.num_frames);
    s << indent << "detection_camera_type: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.detection_camera_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARDRONE_AUTONOMY_MESSAGE_NAVDATA_DEMO_H
