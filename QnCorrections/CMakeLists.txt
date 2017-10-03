cmake_minimum_required(VERSION 3.0)

project(QnCorrectionsFramework)

set (${PROJECT_NAME}_SOURCE_DIR ${CMAKE_SOURCE_DIR}/FlowVectorCorrections/QnCorrections)
set (${PROJECT_NAME}_INCLUDE_DIR ${${PROJECT_NAME}_SOURCE_DIR})

include_directories(${${PROJECT_NAME}_SOURCE_DIR} ${ROOT_INCLUDE_DIRS})
add_definitions(${ROOT_CXX_FLAGS})

file (GLOB SOURCES ${${PROJECT_NAME}_SOURCE_DIR}/QnCorrections*.cxx)

string(REPLACE ".cxx" ".h" HEADERS "${SOURCES}")

include(${ROOT_USE_FILE})
ROOT_GENERATE_DICTIONARY(G__FlowVector ${HEADERS} LINKDEF ${${PROJECT_NAME}_SOURCE_DIR}/QnLinkDef.h)


#---Create a shared library with generated dictionary
add_library(FlowVector SHARED ${SOURCES} ${CMAKE_CURRENT_BINARY_DIR}/G__FlowVector.cxx)
target_link_libraries(FlowVector ${ROOT_LIBRARIES})

install (
    TARGETS FlowVector RESOURCE
    LIBRARY DESTINATION ${PROJECT_ROOT_DIR}/lib
)

install (
    FILES 
        ${CMAKE_BINARY_DIR}/QnCorrections/libFlowVector_rdict.pcm 
        ${CMAKE_BINARY_DIR}/QnCorrections/libFlowVector.rootmap
    DESTINATION ${PROJECT_ROOT_DIR}/lib
)


install (
    DIRECTORY ${${PROJECT_NAME}_INCLUDE_DIR}
    DESTINATION ${PROJECT_ROOT_INCLUDE_DIR} 
    FILES_MATCHING PATTERN "QnCorrections*.h"
)
