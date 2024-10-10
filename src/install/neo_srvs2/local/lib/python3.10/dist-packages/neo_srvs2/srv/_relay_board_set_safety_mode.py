# generated from rosidl_generator_py/resource/_idl.py.em
# with input from neo_srvs2:srv/RelayBoardSetSafetyMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RelayBoardSetSafetyMode_Request(type):
    """Metaclass of message 'RelayBoardSetSafetyMode_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('neo_srvs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'neo_srvs2.srv.RelayBoardSetSafetyMode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__relay_board_set_safety_mode__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__relay_board_set_safety_mode__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__relay_board_set_safety_mode__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__relay_board_set_safety_mode__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__relay_board_set_safety_mode__request

            from neo_msgs2.msg import SafetyMode
            if SafetyMode.__class__._TYPE_SUPPORT is None:
                SafetyMode.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RelayBoardSetSafetyMode_Request(metaclass=Metaclass_RelayBoardSetSafetyMode_Request):
    """Message class 'RelayBoardSetSafetyMode_Request'."""

    __slots__ = [
        '_set_safety_mode',
        '_station',
    ]

    _fields_and_field_types = {
        'set_safety_mode': 'neo_msgs2/SafetyMode',
        'station': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['neo_msgs2', 'msg'], 'SafetyMode'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from neo_msgs2.msg import SafetyMode
        self.set_safety_mode = kwargs.get('set_safety_mode', SafetyMode())
        self.station = kwargs.get('station', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.set_safety_mode != other.set_safety_mode:
            return False
        if self.station != other.station:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def set_safety_mode(self):
        """Message field 'set_safety_mode'."""
        return self._set_safety_mode

    @set_safety_mode.setter
    def set_safety_mode(self, value):
        if __debug__:
            from neo_msgs2.msg import SafetyMode
            assert \
                isinstance(value, SafetyMode), \
                "The 'set_safety_mode' field must be a sub message of type 'SafetyMode'"
        self._set_safety_mode = value

    @builtins.property
    def station(self):
        """Message field 'station'."""
        return self._station

    @station.setter
    def station(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'station' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'station' field must be an unsigned integer in [0, 255]"
        self._station = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RelayBoardSetSafetyMode_Response(type):
    """Metaclass of message 'RelayBoardSetSafetyMode_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('neo_srvs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'neo_srvs2.srv.RelayBoardSetSafetyMode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__relay_board_set_safety_mode__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__relay_board_set_safety_mode__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__relay_board_set_safety_mode__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__relay_board_set_safety_mode__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__relay_board_set_safety_mode__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RelayBoardSetSafetyMode_Response(metaclass=Metaclass_RelayBoardSetSafetyMode_Response):
    """Message class 'RelayBoardSetSafetyMode_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_RelayBoardSetSafetyMode(type):
    """Metaclass of service 'RelayBoardSetSafetyMode'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('neo_srvs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'neo_srvs2.srv.RelayBoardSetSafetyMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__relay_board_set_safety_mode

            from neo_srvs2.srv import _relay_board_set_safety_mode
            if _relay_board_set_safety_mode.Metaclass_RelayBoardSetSafetyMode_Request._TYPE_SUPPORT is None:
                _relay_board_set_safety_mode.Metaclass_RelayBoardSetSafetyMode_Request.__import_type_support__()
            if _relay_board_set_safety_mode.Metaclass_RelayBoardSetSafetyMode_Response._TYPE_SUPPORT is None:
                _relay_board_set_safety_mode.Metaclass_RelayBoardSetSafetyMode_Response.__import_type_support__()


class RelayBoardSetSafetyMode(metaclass=Metaclass_RelayBoardSetSafetyMode):
    from neo_srvs2.srv._relay_board_set_safety_mode import RelayBoardSetSafetyMode_Request as Request
    from neo_srvs2.srv._relay_board_set_safety_mode import RelayBoardSetSafetyMode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
