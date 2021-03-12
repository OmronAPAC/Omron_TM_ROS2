# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tm_msgs:srv/ConnectTM.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConnectTM_Request(type):
    """Metaclass of message 'ConnectTM_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TMSVR': 0,
        'TMSCT': 1,
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
                'tm_msgs.srv.ConnectTM_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__connect_tm__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__connect_tm__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__connect_tm__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__connect_tm__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__connect_tm__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TMSVR': cls.__constants['TMSVR'],
            'TMSCT': cls.__constants['TMSCT'],
        }

    @property
    def TMSVR(self):
        """Message constant 'TMSVR'."""
        return Metaclass_ConnectTM_Request.__constants['TMSVR']

    @property
    def TMSCT(self):
        """Message constant 'TMSCT'."""
        return Metaclass_ConnectTM_Request.__constants['TMSCT']


class ConnectTM_Request(metaclass=Metaclass_ConnectTM_Request):
    """
    Message class 'ConnectTM_Request'.

    Constants:
      TMSVR
      TMSCT
    """

    __slots__ = [
        '_server',
        '_connect',
        '_reconnect',
        '_timeout',
        '_timeval',
    ]

    _fields_and_field_types = {
        'server': 'int8',
        'connect': 'boolean',
        'reconnect': 'boolean',
        'timeout': 'double',
        'timeval': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.server = kwargs.get('server', int())
        self.connect = kwargs.get('connect', bool())
        self.reconnect = kwargs.get('reconnect', bool())
        self.timeout = kwargs.get('timeout', float())
        self.timeval = kwargs.get('timeval', float())

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
        if self.server != other.server:
            return False
        if self.connect != other.connect:
            return False
        if self.reconnect != other.reconnect:
            return False
        if self.timeout != other.timeout:
            return False
        if self.timeval != other.timeval:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def server(self):
        """Message field 'server'."""
        return self._server

    @server.setter
    def server(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'server' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'server' field must be an integer in [-128, 127]"
        self._server = value

    @property
    def connect(self):
        """Message field 'connect'."""
        return self._connect

    @connect.setter
    def connect(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'connect' field must be of type 'bool'"
        self._connect = value

    @property
    def reconnect(self):
        """Message field 'reconnect'."""
        return self._reconnect

    @reconnect.setter
    def reconnect(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reconnect' field must be of type 'bool'"
        self._reconnect = value

    @property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timeout' field must be of type 'float'"
        self._timeout = value

    @property
    def timeval(self):
        """Message field 'timeval'."""
        return self._timeval

    @timeval.setter
    def timeval(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timeval' field must be of type 'float'"
        self._timeval = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ConnectTM_Response(type):
    """Metaclass of message 'ConnectTM_Response'."""

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
                'tm_msgs.srv.ConnectTM_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__connect_tm__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__connect_tm__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__connect_tm__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__connect_tm__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__connect_tm__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConnectTM_Response(metaclass=Metaclass_ConnectTM_Response):
    """Message class 'ConnectTM_Response'."""

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


class Metaclass_ConnectTM(type):
    """Metaclass of service 'ConnectTM'."""

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
                'tm_msgs.srv.ConnectTM')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__connect_tm

            from tm_msgs.srv import _connect_tm
            if _connect_tm.Metaclass_ConnectTM_Request._TYPE_SUPPORT is None:
                _connect_tm.Metaclass_ConnectTM_Request.__import_type_support__()
            if _connect_tm.Metaclass_ConnectTM_Response._TYPE_SUPPORT is None:
                _connect_tm.Metaclass_ConnectTM_Response.__import_type_support__()


class ConnectTM(metaclass=Metaclass_ConnectTM):
    from tm_msgs.srv._connect_tm import ConnectTM_Request as Request
    from tm_msgs.srv._connect_tm import ConnectTM_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
