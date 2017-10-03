# CMakeLists.txt for DataTree package. It creates a library with dictionary and a main program
cmake_minimum_required(VERSION 2.4 FATAL_ERROR)
project(DataTree)

set (${PROJECT_NAME}_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set (${PROJECT_NAME}_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src
    CACHE INTERNAL "${PROJECT_NAME} include directory" FORCE)


include_directories(
    ${DataTree_INCLUDE_DIR}
    )

file (GLOB SRC_FILES ${DataTree_SOURCE_DIR}/*.cxx)

add_definitions(${ROOT_CXX_FLAGS})

include (${ROOT_USE_FILE})

ROOT_GENERATE_DICTIONARY(
    G__DataTreeEvent 
    ${DataTree_SOURCE_DIR}/Macros/DataTreeEventQA.C 
    ${DataTree_SOURCE_DIR}/DataTreeConverterNA61.h 
    ${DataTree_SOURCE_DIR}/DataTreeEvent.h 
    LINKDEF 
    ${DataTree_SOURCE_DIR}/LinkDef/DataTreeEventLinkDef.h)



add_library(DataTree SHARED ${SRC_FILES} G__DataTreeEvent.cxx)


target_link_libraries(DataTree ${ROOT_LIBRARIES})

install (
    TARGETS DataTree RESOURCE
    LIBRARY DESTINATION ${PROJECT_ROOT_DIR}/lib
)

install (
    FILES 
        ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/libDataTreeEvent_rdict.pcm 
        ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/libDataTreeEvent.rootmap
    DESTINATION ${PROJECT_ROOT_DIR}/lib
)

install (
    DIRECTORY ${DataTree_INCLUDE_DIR}/ 
    DESTINATION ${PROJECT_ROOT_INCLUDE_DIR} 
    FILES_MATCHING PATTERN "DataTree*")
