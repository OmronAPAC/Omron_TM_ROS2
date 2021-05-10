# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tm_msgs:srv/SetIO.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetIO_Request(type):
    """Metaclass of message 'SetIO_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODULE_CONTROLBOX': 0,
        'MODULE_ENDEFFECTOR': 1,
        'TYPE_DIGITAL_IN': 0,
        'TYPE_DIGITAL_OUT': 1,
        'TYPE_INSTANT_DO': 2,
        'TYPE_ANALOG_IN': 3,
        'TYPE_ANALOG_OUT': 4,
        'TYPE_INSTANT_AO': 5,
        'STATE_OFF': 0,
        'STATE_ON': 1,
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
                'tm_msgs.srv.SetIO_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_io__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_io__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_io__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_io__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_io__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODULE_CONTROLBOX': cls.__constants['MODULE_CONTROLBOX'],
            'MODULE_ENDEFFECTOR': cls.__constants['MODULE_ENDEFFECTOR'],
            'TYPE_DIGITAL_IN': cls.__constants['TYPE_DIGITAL_IN'],
            'TYPE_DIGITAL_OUT': cls.__constants['TYPE_DIGITAL_OUT'],
            'TYPE_INSTANT_DO': cls.__constants['TYPE_INSTANT_DO'],
            'TYPE_ANALOG_IN': cls.__constants['TYPE_ANALOG_IN'],
            'TYPE_ANALOG_OUT': cls.__constants['TYPE_ANALOG_OUT'],
            'TYPE_INSTANT_AO': cls.__constants['TYPE_INSTANT_AO'],
            'STATE_OFF': cls.__constants['STATE_OFF'],
            'STATE_ON': cls.__constants['STATE_ON'],
        }

    @property
    def MODULE_CONTROLBOX(self):
        """Message constant 'MODULE_CONTROLBOX'."""
        return Metaclass_SetIO_Request.__constants['MODULE_CONTROLBOX']

    @property
    def MODULE_ENDEFFECTOR(self):
        """Message constant 'MODULE_ENDEFFECTOR'."""
        return Metaclass_SetIO_Request.__constants['MODULE_ENDEFFECTOR']

    @property
    def TYPE_DIGITAL_IN(self):
        """Message constant 'TYPE_DIGITAL_IN'."""
        return Metaclass_SetIO_Request.__constants['TYPE_DIGITAL_IN']

    @property
    def TYPE_DIGITAL_OUT(self):
        """Message constant 'TYPE_DIGITAL_OUT'."""
        return Metaclass_SetIO_Request.__constants['TYPE_DIGITAL_OUT']

    @property
    def TYPE_INSTANT_DO(self):
        """Message constant 'TYPE_INSTANT_DO'."""
        return Metaclass_SetIO_Request.__constants['TYPE_INSTANT_DO']

    @property
    def TYPE_ANALOG_IN(self):
        """Message constant 'TYPE_ANALOG_IN'."""
        return Metaclass_SetIO_Request.__constants['TYPE_ANALOG_IN']

    @property
    def TYPE_ANALOG_OUT(self):
        """Message constant 'TYPE_ANALOG_OUT'."""
        return Metaclass_SetIO_Request.__constants['TYPE_ANALOG_OUT']

    @property
    def TYPE_INSTANT_AO(self):
        """Message constant 'TYPE_INSTANT_AO'."""
        return Metaclass_SetIO_Request.__constants['TYPE_INSTANT_AO']

    @property
    def STATE_OFF(self):
        """Message constant 'STATE_OFF'."""
        return Metaclass_SetIO_Request.__constants['STATE_OFF']

    @property
    def STATE_ON(self):
        """Message constant 'STATE_ON'."""
        return Metaclass_SetIO_Request.__constants['STATE_ON']


class SetIO_Request(metaclass=Metaclass_SetIO_Request):
    """
    Message class 'SetIO_Request'.

    Constants:
      MODULE_CONTROLBOX
      MODULE_ENDEFFECTOR
      TYPE_DIGITAL_IN
      TYPE_DIGITAL_OUT
      TYPE_INSTANT_DO
      TYPE_ANALOG_IN
      TYPE_ANALOG_OUT
      TYPE_INSTANT_AO
      STATE_OFF
      STATE_ON
    """

    __slots__ = [
        '_module',
        '_type',
        '_pin',
        '_state',
    ]

    _fields_and_field_types = {
        'module': 'int8',
        'type': 'int8',
        'pin': 'int8',
        'state': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.module = kwargs.get('module', int())
        self.type = kwargs.get('type', int())
        self.pin = kwargs.get('pin', int())
        self.state = kwargs.get('state', float())

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
        if self.module != other.module:
            return False
        if self.type != other.type:
            return False
        if self.pin != other.pin:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def module(self):
        """Message field 'module'."""
        return self._module

    @module.setter
    def module(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'module' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'module' field must be an integer in [-128, 127]"
        self._module = value

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'type' field must be an integer in [-128, 127]"
        self._type = value

    @property
    def pin(self):
        """Message field 'pin'."""
        return self._pin

    @pin.setter
    def pin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pin' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pin' field must be an integer in [-128, 127]"
        self._pin = value

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'state' field must be of type 'float'"
        self._state = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetIO_Response(type):
    """Metaclass of message 'SetIO_Response'."""

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
                'tm_msgs.srv.SetIO_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_io__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_io__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_io__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_io__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_io__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetIO_Response(metaclass=Metaclass_SetIO_Response):
    """Message class 'SetIO_Response'."""

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


class Metaclass_SetIO(type):
    """Metaclass of service 'SetIO'."""

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
                'tm_msgs.srv.SetIO')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_io

            from tm_msgs.srv import _set_io
            if _set_io.Metaclass_SetIO_Request._TYPE_SUPPORT is None:
                _set_io.Metaclass_SetIO_Request.__import_type_support__()
            if _set_io.Metaclass_SetIO_Response._TYPE_SUPPORT is None:
                _set_io.Metaclass_SetIO_Response.__import_type_support__()


class SetIO(metaclass=Metaclass_SetIO):
    from tm_msgs.srv._set_io import SetIO_Request as Request
    from tm_msgs.srv._set_io import SetIO_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
