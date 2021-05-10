# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tm_msgs:srv/SetPositions.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'positions'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetPositions_Request(type):
    """Metaclass of message 'SetPositions_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PTP_J': 1,
        'PTP_T': 2,
        'LINE_T': 4,
        'CIRC_T': 6,
        'PLINE_T': 8,
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
                'tm_msgs.srv.SetPositions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_positions__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_positions__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_positions__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_positions__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_positions__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PTP_J': cls.__constants['PTP_J'],
            'PTP_T': cls.__constants['PTP_T'],
            'LINE_T': cls.__constants['LINE_T'],
            'CIRC_T': cls.__constants['CIRC_T'],
            'PLINE_T': cls.__constants['PLINE_T'],
        }

    @property
    def PTP_J(self):
        """Message constant 'PTP_J'."""
        return Metaclass_SetPositions_Request.__constants['PTP_J']

    @property
    def PTP_T(self):
        """Message constant 'PTP_T'."""
        return Metaclass_SetPositions_Request.__constants['PTP_T']

    @property
    def LINE_T(self):
        """Message constant 'LINE_T'."""
        return Metaclass_SetPositions_Request.__constants['LINE_T']

    @property
    def CIRC_T(self):
        """Message constant 'CIRC_T'."""
        return Metaclass_SetPositions_Request.__constants['CIRC_T']

    @property
    def PLINE_T(self):
        """Message constant 'PLINE_T'."""
        return Metaclass_SetPositions_Request.__constants['PLINE_T']


class SetPositions_Request(metaclass=Metaclass_SetPositions_Request):
    """
    Message class 'SetPositions_Request'.

    Constants:
      PTP_J
      PTP_T
      LINE_T
      CIRC_T
      PLINE_T
    """

    __slots__ = [
        '_motion_type',
        '_positions',
        '_velocity',
        '_acc_time',
        '_blend_percentage',
        '_fine_goal',
    ]

    _fields_and_field_types = {
        'motion_type': 'int8',
        'positions': 'sequence<double>',
        'velocity': 'double',
        'acc_time': 'double',
        'blend_percentage': 'int32',
        'fine_goal': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motion_type = kwargs.get('motion_type', int())
        self.positions = array.array('d', kwargs.get('positions', []))
        self.velocity = kwargs.get('velocity', float())
        self.acc_time = kwargs.get('acc_time', float())
        self.blend_percentage = kwargs.get('blend_percentage', int())
        self.fine_goal = kwargs.get('fine_goal', bool())

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
        if self.motion_type != other.motion_type:
            return False
        if self.positions != other.positions:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acc_time != other.acc_time:
            return False
        if self.blend_percentage != other.blend_percentage:
            return False
        if self.fine_goal != other.fine_goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def motion_type(self):
        """Message field 'motion_type'."""
        return self._motion_type

    @motion_type.setter
    def motion_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motion_type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'motion_type' field must be an integer in [-128, 127]"
        self._motion_type = value

    @property
    def positions(self):
        """Message field 'positions'."""
        return self._positions

    @positions.setter
    def positions(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'positions' array.array() must have the type code of 'd'"
            self._positions = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'positions' field must be a set or sequence and each value of type 'float'"
        self._positions = array.array('d', value)

    @property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
        self._velocity = value

    @property
    def acc_time(self):
        """Message field 'acc_time'."""
        return self._acc_time

    @acc_time.setter
    def acc_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_time' field must be of type 'float'"
        self._acc_time = value

    @property
    def blend_percentage(self):
        """Message field 'blend_percentage'."""
        return self._blend_percentage

    @blend_percentage.setter
    def blend_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blend_percentage' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'blend_percentage' field must be an integer in [-2147483648, 2147483647]"
        self._blend_percentage = value

    @property
    def fine_goal(self):
        """Message field 'fine_goal'."""
        return self._fine_goal

    @fine_goal.setter
    def fine_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fine_goal' field must be of type 'bool'"
        self._fine_goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetPositions_Response(type):
    """Metaclass of message 'SetPositions_Response'."""

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
                'tm_msgs.srv.SetPositions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_positions__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_positions__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_positions__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_positions__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_positions__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPositions_Response(metaclass=Metaclass_SetPositions_Response):
    """Message class 'SetPositions_Response'."""

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


class Metaclass_SetPositions(type):
    """Metaclass of service 'SetPositions'."""

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
                'tm_msgs.srv.SetPositions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_positions

            from tm_msgs.srv import _set_positions
            if _set_positions.Metaclass_SetPositions_Request._TYPE_SUPPORT is None:
                _set_positions.Metaclass_SetPositions_Request.__import_type_support__()
            if _set_positions.Metaclass_SetPositions_Response._TYPE_SUPPORT is None:
                _set_positions.Metaclass_SetPositions_Response.__import_type_support__()


class SetPositions(metaclass=Metaclass_SetPositions):
    from tm_msgs.srv._set_positions import SetPositions_Request as Request
    from tm_msgs.srv._set_positions import SetPositions_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
