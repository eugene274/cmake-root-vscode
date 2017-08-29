cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(FlowVectorNA61)

# bad stuff
set (${PROJECT_NAME}_SOURCE_DIR     ${CMAKE_CURRENT_SOURCE_DIR}/src)
set (${PROJECT_NAME}_INCLUDE_DIR    ${CMAKE_CURRENT_SOURCE_DIR}/include)

string (TOLOWER ${PROJECT_NAME} STR_BIN_OUTPUT_FILENAME)


file(GLOB SRC_FILES ${FlowVectorNA61_SOURCE_DIR}/*.cxx)

include_directories(
    ${FlowVectorNA61_INCLUDE_DIR}
    ${DataTree_INCLUDE_DIR}
    )

add_definitions(${ROOT_CXX_FLAGS})

add_executable(${PROJECT_NAME} ${SRC_FILES} )

target_link_libraries (${PROJECT_NAME} DataTree ${ROOT_LIBRARIES}) 

set_target_properties (${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${STR_BIN_OUTPUT_FILENAME})

install (
    TARGETS ${PROJECT_NAME}
    RUNTIME     DESTINATION ${PROJECT_ROOT_BIN_DIR}
    INCLUDES    DESTINATION ${PROJECT_ROOT_INCLUDE_DIR}
)