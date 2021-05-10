#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tmrlib::tmrdriver" for configuration ""
set_property(TARGET tmrlib::tmrdriver APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tmrlib::tmrdriver PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtmrdriver.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS tmrlib::tmrdriver )
list(APPEND _IMPORT_CHECK_FILES_FOR_tmrlib::tmrdriver "${_IMPORT_PREFIX}/lib/libtmrdriver.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
