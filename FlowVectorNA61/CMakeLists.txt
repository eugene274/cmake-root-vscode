cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(FlowVectorNA61)

# bad stuff
set (${PROJECT_NAME}_SOURCE_DIR     ${CMAKE_CURRENT_SOURCE_DIR}/src)
set (${PROJECT_NAME}_INCLUDE_DIR    ${CMAKE_CURRENT_SOURCE_DIR}/include)

string (TOLOWER ${PROJECT_NAME} STR_BIN_OUTPUT_FILENAME)

file(GLOB SRC_FILES ${FlowVectorNA61_SOURCE_DIR}/FlowVectorNA61Selector*)

include_directories(
    ${${PROJECT_NAME}_INCLUDE_DIR}
    ${DataTree_INCLUDE_DIR}
    )

add_definitions(${ROOT_CXX_FLAGS})


add_executable(fvna61_flow_analysis 
    ${${PROJECT_NAME}_SOURCE_DIR}/FlowVectorNA61.cxx 
)
target_link_libraries (fvna61_flow_analysis DataTree ${ROOT_LIBRARIES}) 


install (
    TARGETS fvna61_flow_analysis
    RUNTIME     DESTINATION ${PROJECT_ROOT_BIN_DIR}
    INCLUDES    DESTINATION ${PROJECT_ROOT_INCLUDE_DIR}
)