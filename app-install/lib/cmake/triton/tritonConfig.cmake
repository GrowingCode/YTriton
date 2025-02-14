
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was Config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

####################################################################################

include("${CMAKE_CURRENT_LIST_DIR}/tritonTargets.cmake")

set(TRITON_ARCHIVE              "D:/HomeSpace/CTaintAnalysis/YTriton/app-install/lib/triton.lib")
set(TRITON_BITWUZLA_INTERFACE   OFF)
set(TRITON_BOOST_INTERFACE      OFF)
set(TRITON_BUILD_SHARED_LIBS    ON)
set(TRITON_INCLUDE_DIRS         "D:/HomeSpace/CTaintAnalysis/YTriton/app-install/include")
set(TRITON_INSTALL_PREFIX       D:/HomeSpace/CTaintAnalysis/YTriton/app-install)
set(TRITON_LIBRARIES            "triton;;;;;")
set(TRITON_LIBRARY              "D:/HomeSpace/CTaintAnalysis/YTriton/app-install/lib/triton.dll")
set(TRITON_LLVM_INTERFACE       OFF)
set(TRITON_MSVC_STATIC          OFF)
set(TRITON_PYTHON_BINDINGS      OFF)
set(TRITON_VERSION              1.0)
set(TRITON_Z3_INTERFACE         ON)

message(STATUS "Found Triton: ${CMAKE_CURRENT_LIST_DIR}/tritonConfig.cmake (found version ${TRITON_VERSION})")

include(CMakeFindDependencyMacro)

# Boost includes
if (TRITON_BOOST_INTERFACE)
  find_dependency(Boost)
endif()

# Triton include
include_directories("D:/HomeSpace/CTaintAnalysis/YTriton/app-install/include")
link_directories(BEFORE "D:/HomeSpace/CTaintAnalysis/YTriton/app-install/lib")

# Capstone include
include_directories("D:/GitDownloadLibrary/capstone-5.0.1/include")
link_directories(BEFORE "")

# Python include directories
if (TRITON_PYTHON_BINDINGS)
    include_directories("")
    link_directories(BEFORE "")
endif()

# LLVM include and lib directories
if (TRITON_LLVM_INTERFACE)
    include_directories("")
    link_directories(BEFORE "")
endif()

# Z3 include directories
if (TRITON_Z3_INTERFACE)
    include_directories("D:/GitDownloadLibrary/z3-4.13.0-x64-win/include")
    link_directories(BEFORE "")
endif()

# Bitwuzla include directories
if (TRITON_BITWUZLA_INTERFACE)
    include_directories("")
    link_directories(BEFORE "")
endif()
