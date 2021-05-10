# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tm_msgs:srv/SetEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetEvent_Request(type):
    """Metaclass of message 'SetEvent_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TAG': 1,
        'WAIT_TAG': 2,
        'STOP': 11,
        'PAUSE': 12,
        'RESUME': 13,
        'EXIT': -1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tm_msgs.srv.SetEvent_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_event__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_event__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_event__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_event__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_event__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TAG': cls.__constants['TAG'],
            'WAIT_TAG': cls.__constants['WAIT_TAG'],
            'STOP': cls.__constants['STOP'],
            'PAUSE': cls.__constants['PAUSE'],
            'RESUME': cls.__constants['RESUME'],
            'EXIT': cls.__constants['EXIT'],
        }

    @property
    def TAG(self):
        """Message constant 'TAG'."""
        return Metaclass_SetEvent_Request.__constants['TAG']

    @property
    def WAIT_TAG(self):
        """Message constant 'WAIT_TAG'."""
        return Metaclass_SetEvent_Request.__constants['WAIT_TAG']

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_SetEvent_Request.__constants['STOP']

    @property
    def PAUSE(self):
        """Message constant 'PAUSE'."""
        return Metaclass_SetEvent_Request.__constants['PAUSE']

    @property
    def RESUME(self):
        """Message constant 'RESUME'."""
        return Metaclass_SetEvent_Request.__constants['RESUME']

    @property
    def EXIT(self):
        """Message constant 'EXIT'."""
        return Metaclass_SetEvent_Request.__constants['EXIT']


class SetEvent_Request(metaclass=Metaclass_SetEvent_Request):
    """
    Message class 'SetEvent_Request'.

    Constants:
      TAG
      WAIT_TAG
      STOP
      PAUSE
      RESUME
      EXIT
    """

    __slots__ = [
        '_func',
        '_arg0',
        '_arg1',
    ]

    _fields_and_field_types = {
        'func': 'int8',
        'arg0': 'int8',
        'arg1': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.func = kwargs.get('func', int())
        self.arg0 = kwargs.get('arg0', int())
        self.arg1 = kwargs.get('arg1', int())

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
        if self.func != other.func:
            return False
        if self.arg0 != other.arg0:
            return False
        if self.arg1 != other.arg1:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def func(self):
        """Message field 'func'."""
        return self._func

    @func.setter
    def func(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'func' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'func' field must be an integer in [-128, 127]"
        self._func = value

    @property
    def arg0(self):
        """Message field 'arg0'."""
        return self._arg0

    @arg0.setter
    def arg0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arg0' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'arg0' field must be an integer in [-128, 127]"
        self._arg0 = value

    @property
    def arg1(self):
        """Message field 'arg1'."""
        return self._arg1

    @arg1.setter
    def arg1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arg1' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'arg1' field must be an integer in [-128, 127]"
        self._arg1 = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetEvent_Response(type):
    """Metaclass of message 'SetEvent_Response'."""

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
            module = import_type_support('tm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tm_msgs.srv.SetEvent_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_event__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_event__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_event__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_event__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_event__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetEvent_Response(metaclass=Metaclass_SetEvent_Response):
    """Message class 'SetEvent_Response'."""

    __slots__ = [
        '_ok',
    ]

    _fields_and_field_types = {
        'ok': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ok = kwargs.get('ok', bool())

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
        if self.ok != other.ok:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ok(self):
        """Message field 'ok'."""
        return self._ok

    @ok.setter
    def ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ok' field must be of type 'bool'"
        self._ok = value


class Metaclass_SetEvent(type):
    """Metaclass of service 'SetEvent'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tm_msgs.srv.SetEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_event

            from tm_msgs.srv import _set_event
            if _set_event.Metaclass_SetEvent_Request._TYPE_SUPPORT is None:
                _set_event.Metaclass_SetEvent_Request.__import_type_support__()
            if _set_event.Metaclass_SetEvent_Response._TYPE_SUPPORT is None:
                _set_event.Metaclass_SetEvent_Response.__import_type_support__()


class SetEvent(metaclass=Metaclass_SetEvent):
    from tm_msgs.srv._set_event import SetEvent_Request as Request
    from tm_msgs.srv._set_event import SetEvent_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
