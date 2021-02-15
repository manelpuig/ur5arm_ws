// Generated by gencpp from file ur_dashboard_msgs/RawRequestRequest.msg
// DO NOT EDIT!


#ifndef UR_DASHBOARD_MSGS_MESSAGE_RAWREQUESTREQUEST_H
#define UR_DASHBOARD_MSGS_MESSAGE_RAWREQUESTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur_dashboard_msgs
{
template <class ContainerAllocator>
struct RawRequestRequest_
{
  typedef RawRequestRequest_<ContainerAllocator> Type;

  RawRequestRequest_()
    : query()  {
    }
  RawRequestRequest_(const ContainerAllocator& _alloc)
    : query(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _query_type;
  _query_type query;





  typedef boost::shared_ptr< ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RawRequestRequest_

typedef ::ur_dashboard_msgs::RawRequestRequest_<std::allocator<void> > RawRequestRequest;

typedef boost::shared_ptr< ::ur_dashboard_msgs::RawRequestRequest > RawRequestRequestPtr;
typedef boost::shared_ptr< ::ur_dashboard_msgs::RawRequestRequest const> RawRequestRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator1> & lhs, const ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator2> & rhs)
{
  return lhs.query == rhs.query;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator1> & lhs, const ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ur_dashboard_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6490a46152f373285fe18f491ed93702";
  }

  static const char* value(const ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6490a46152f37328ULL;
  static const uint64_t static_value2 = 0x5fe18f491ed93702ULL;
};

template<class ContainerAllocator>
struct DataType< ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur_dashboard_msgs/RawRequestRequest";
  }

  static const char* value(const ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This service is there to support any dashboard query not explicitly supported\n"
"string query\n"
;
  }

  static const char* value(const ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.query);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RawRequestRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur_dashboard_msgs::RawRequestRequest_<ContainerAllocator>& v)
  {
    s << indent << "query: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.query);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR_DASHBOARD_MSGS_MESSAGE_RAWREQUESTREQUEST_H
