cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(NA49_61)

# You need to tell CMake where to find the ROOT installation. This can be done in a number of ways:
#   - ROOT built with classic configure/make use the provided $ROOTSYS/etc/cmake/FindROOT.cmake
#   - ROOT built with CMake. Add in CMAKE_PREFIX_PATH the installation prefix for ROOT
list(APPEND CMAKE_PREFIX_PATH $ENV{ROOTSYS})

#---Locate the ROOT package and defines a number of variables (e.g. ROOT_INCLUDE_DIRS)
find_package(ROOT REQUIRED COMPONENTS RIO Net)

#---Define useful ROOT functions and macros (e.g. ROOT_GENERATE_DICTIONARY)
include(${ROOT_USE_FILE})


set (PROJECT_ROOT_NAME           ${PROJECT_NAME})
set (PROJECT_ROOT_DIR            ${CMAKE_CURRENT_SOURCE_DIR})
set (PROJECT_ROOT_BIN_DIR        ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set (PROJECT_ROOT_SOURCE_DIR     ${CMAKE_CURRENT_SOURCE_DIR}/src)
set (PROJECT_ROOT_INCLUDE_DIR    ${CMAKE_CURRENT_SOURCE_DIR}/include)

include_directories (${ROOT_INCLUDE_DIRS} ${PROJECT_ROOT_INCLUDE_DIR})
link_directories (${PROJECT_ROOT_DIR}/lib)

add_subdirectory (DataTree)
add_subdirectory (NA61ToDataTree)
add_subdirectory (FlowVectorNA61)
