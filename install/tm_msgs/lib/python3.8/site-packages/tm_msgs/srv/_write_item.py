# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tm_msgs:srv/WriteItem.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WriteItem_Request(type):
    """Metaclass of message 'WriteItem_Request'."""

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
                'tm_msgs.srv.WriteItem_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__write_item__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__write_item__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__write_item__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__write_item__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__write_item__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WriteItem_Request(metaclass=Metaclass_WriteItem_Request):
    """Message class 'WriteItem_Request'."""

    __slots__ = [
        '_id',
        '_item',
        '_value',
    ]

    _fields_and_field_types = {
        'id': 'string',
        'item': 'string',
        'value': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', str())
        self.item = kwargs.get('item', str())
        self.value = kwargs.get('value', str())

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
        if self.id != other.id:
            return False
        if self.item != other.item:
            return False
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @property
    def item(self):
        """Message field 'item'."""
        return self._item

    @item.setter
    def item(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'item' field must be of type 'str'"
        self._item = value

    @property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'value' field must be of type 'str'"
        self._value = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_WriteItem_Response(type):
    """Metaclass of message 'WriteItem_Response'."""

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
                'tm_msgs.srv.WriteItem_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__write_item__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__write_item__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__write_item__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__write_item__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__write_item__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WriteItem_Response(metaclass=Metaclass_WriteItem_Response):
    """Message class 'WriteItem_Response'."""

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


class Metaclass_WriteItem(type):
    """Metaclass of service 'WriteItem'."""

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
                'tm_msgs.srv.WriteItem')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__write_item

            from tm_msgs.srv import _write_item
            if _write_item.Metaclass_WriteItem_Request._TYPE_SUPPORT is None:
                _write_item.Metaclass_WriteItem_Request.__import_type_support__()
            if _write_item.Metaclass_WriteItem_Response._TYPE_SUPPORT is None:
                _write_item.Metaclass_WriteItem_Response.__import_type_support__()


class WriteItem(metaclass=Metaclass_WriteItem):
    from tm_msgs.srv._write_item import WriteItem_Request as Request
    from tm_msgs.srv._write_item import WriteItem_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
