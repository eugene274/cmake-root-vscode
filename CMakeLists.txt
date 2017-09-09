cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(NA49_61)

# 
# Set path to FindROOT.cmake
#
set(CMAKE_MODULE_PATH /etc/root/cmake)

set(CMAKE_CXX_STANDARD 11) # C++11...
set(CMAKE_CXX_STANDARD_REQUIRED ON) #...is required...
set(CMAKE_CXX_EXTENSIONS OFF)

# You need to tell CMake where to find the ROOT installation. This can be done in a number of ways:
#   - ROOT built with classic configure/make use the provided $ROOTSYS/etc/cmake/FindROOT.cmake
#   - ROOT built with CMake. Add in CMAKE_PREFIX_PATH the installation prefix for ROOT
#list(APPEND CMAKE_PREFIX_PATH /etc/root/cmake)

#---Locate the ROOT package and defines a number of variables (e.g. ROOT_INCLUDE_DIRS)
find_package(ROOT REQUIRED COMPONENTS RIO Net)

#---Define useful ROOT functions and macros (e.g. ROOT_GENERATE_DICTIONARY)
IF (${ROOT_USE_FILE})
    message("ROOT USE FILE: ${ROOT_USE_FILE}")
    include(${ROOT_USE_FILE})
ENDIF()



set (PROJECT_ROOT_NAME           ${PROJECT_NAME})
set (PROJECT_ROOT_DIR            ${CMAKE_CURRENT_SOURCE_DIR})
set (PROJECT_ROOT_BIN_DIR        ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set (PROJECT_ROOT_SOURCE_DIR     ${CMAKE_CURRENT_SOURCE_DIR}/src)
set (PROJECT_ROOT_INCLUDE_DIR    ${CMAKE_CURRENT_SOURCE_DIR}/include)

include_directories (${ROOT_INCLUDE_DIRS} ${PROJECT_ROOT_INCLUDE_DIR})
link_directories (${PROJECT_ROOT_DIR}/lib)

#add if you need to renew. won't work on hpc
#add_subdirectory (DataTree)
add_subdirectory (NA61ToDataTree)
add_subdirectory (FlowVectorNA61)
