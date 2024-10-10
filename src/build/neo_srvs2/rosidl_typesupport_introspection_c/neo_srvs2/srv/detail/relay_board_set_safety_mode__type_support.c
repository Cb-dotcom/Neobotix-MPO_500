// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from neo_srvs2:srv/RelayBoardSetSafetyMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "neo_srvs2/srv/detail/relay_board_set_safety_mode__rosidl_typesupport_introspection_c.h"
#include "neo_srvs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "neo_srvs2/srv/detail/relay_board_set_safety_mode__functions.h"
#include "neo_srvs2/srv/detail/relay_board_set_safety_mode__struct.h"


// Include directives for member types
// Member `set_safety_mode`
#include "neo_msgs2/msg/safety_mode.h"
// Member `set_safety_mode`
#include "neo_msgs2/msg/detail/safety_mode__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void neo_srvs2__srv__RelayBoardSetSafetyMode_Request__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  neo_srvs2__srv__RelayBoardSetSafetyMode_Request__init(message_memory);
}

void neo_srvs2__srv__RelayBoardSetSafetyMode_Request__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Request_fini_function(void * message_memory)
{
  neo_srvs2__srv__RelayBoardSetSafetyMode_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember neo_srvs2__srv__RelayBoardSetSafetyMode_Request__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Request_message_member_array[2] = {
  {
    "set_safety_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_srvs2__srv__RelayBoardSetSafetyMode_Request, set_safety_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "station",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_srvs2__srv__RelayBoardSetSafetyMode_Request, station),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers neo_srvs2__srv__RelayBoardSetSafetyMode_Request__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Request_message_members = {
  "neo_srvs2__srv",  // message namespace
  "RelayBoardSetSafetyMode_Request",  // message name
  2,  // number of fields
  sizeof(neo_srvs2__srv__RelayBoardSetSafetyMode_Request),
  neo_srvs2__srv__RelayBoardSetSafetyMode_Request__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Request_message_member_array,  // message members
  neo_srvs2__srv__RelayBoardSetSafetyMode_Request__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  neo_srvs2__srv__RelayBoardSetSafetyMode_Request__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t neo_srvs2__srv__RelayBoardSetSafetyMode_Request__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Request_message_type_support_handle = {
  0,
  &neo_srvs2__srv__RelayBoardSetSafetyMode_Request__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_neo_srvs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, RelayBoardSetSafetyMode_Request)() {
  neo_srvs2__srv__RelayBoardSetSafetyMode_Request__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_msgs2, msg, SafetyMode)();
  if (!neo_srvs2__srv__RelayBoardSetSafetyMode_Request__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Request_message_type_support_handle.typesupport_identifier) {
    neo_srvs2__srv__RelayBoardSetSafetyMode_Request__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &neo_srvs2__srv__RelayBoardSetSafetyMode_Request__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "neo_srvs2/srv/detail/relay_board_set_safety_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "neo_srvs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "neo_srvs2/srv/detail/relay_board_set_safety_mode__functions.h"
// already included above
// #include "neo_srvs2/srv/detail/relay_board_set_safety_mode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void neo_srvs2__srv__RelayBoardSetSafetyMode_Response__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  neo_srvs2__srv__RelayBoardSetSafetyMode_Response__init(message_memory);
}

void neo_srvs2__srv__RelayBoardSetSafetyMode_Response__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Response_fini_function(void * message_memory)
{
  neo_srvs2__srv__RelayBoardSetSafetyMode_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember neo_srvs2__srv__RelayBoardSetSafetyMode_Response__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_srvs2__srv__RelayBoardSetSafetyMode_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers neo_srvs2__srv__RelayBoardSetSafetyMode_Response__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Response_message_members = {
  "neo_srvs2__srv",  // message namespace
  "RelayBoardSetSafetyMode_Response",  // message name
  1,  // number of fields
  sizeof(neo_srvs2__srv__RelayBoardSetSafetyMode_Response),
  neo_srvs2__srv__RelayBoardSetSafetyMode_Response__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Response_message_member_array,  // message members
  neo_srvs2__srv__RelayBoardSetSafetyMode_Response__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  neo_srvs2__srv__RelayBoardSetSafetyMode_Response__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t neo_srvs2__srv__RelayBoardSetSafetyMode_Response__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Response_message_type_support_handle = {
  0,
  &neo_srvs2__srv__RelayBoardSetSafetyMode_Response__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_neo_srvs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, RelayBoardSetSafetyMode_Response)() {
  if (!neo_srvs2__srv__RelayBoardSetSafetyMode_Response__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Response_message_type_support_handle.typesupport_identifier) {
    neo_srvs2__srv__RelayBoardSetSafetyMode_Response__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &neo_srvs2__srv__RelayBoardSetSafetyMode_Response__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "neo_srvs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "neo_srvs2/srv/detail/relay_board_set_safety_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers neo_srvs2__srv__detail__relay_board_set_safety_mode__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_service_members = {
  "neo_srvs2__srv",  // service namespace
  "RelayBoardSetSafetyMode",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // neo_srvs2__srv__detail__relay_board_set_safety_mode__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Request_message_type_support_handle,
  NULL  // response message
  // neo_srvs2__srv__detail__relay_board_set_safety_mode__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_Response_message_type_support_handle
};

static rosidl_service_type_support_t neo_srvs2__srv__detail__relay_board_set_safety_mode__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_service_type_support_handle = {
  0,
  &neo_srvs2__srv__detail__relay_board_set_safety_mode__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, RelayBoardSetSafetyMode_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, RelayBoardSetSafetyMode_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_neo_srvs2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, RelayBoardSetSafetyMode)() {
  if (!neo_srvs2__srv__detail__relay_board_set_safety_mode__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_service_type_support_handle.typesupport_identifier) {
    neo_srvs2__srv__detail__relay_board_set_safety_mode__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)neo_srvs2__srv__detail__relay_board_set_safety_mode__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, RelayBoardSetSafetyMode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, RelayBoardSetSafetyMode_Response)()->data;
  }

  return &neo_srvs2__srv__detail__relay_board_set_safety_mode__rosidl_typesupport_introspection_c__RelayBoardSetSafetyMode_service_type_support_handle;
}
