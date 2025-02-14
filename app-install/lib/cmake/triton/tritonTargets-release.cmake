#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "triton::triton" for configuration "Release"
set_property(TARGET triton::triton APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(triton::triton PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/triton.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/triton.dll"
  )

list(APPEND _cmake_import_check_targets triton::triton )
list(APPEND _cmake_import_check_files_for_triton::triton "${_IMPORT_PREFIX}/lib/triton.lib" "${_IMPORT_PREFIX}/lib/triton.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
