# NOTE: this is not written for cross-platform compatibility
CMAKE_MINIMUM_REQUIRED(VERSION 3.12)
project(test_struct)

set_property(GLOBAL PROPERTY POSITION_INDEPENDENT_CODE ON)

# add_definitions(-DNDEBUG)
set(PYTHON_ROOT "C:/Users/$ENV{USERNAME}/AppData/Local/Programs/Python/Python310")
include_directories(
    ${CMAKE_CURRENT_LIST_DIR}/include
    ${CMAKE_CURRENT_LIST_DIR}/include/test_struct
    ${CMAKE_CURRENT_LIST_DIR}/../../build/pybind11/include

    # hardcode python location for quick test
    "${PYTHON_ROOT}/include"
)

set(SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/bash_bindings/test_struct.cpp
    ${CMAKE_CURRENT_LIST_DIR}/bash_bindings/test_struct/test_struct.cpp
)
set(HEADERS
    ${CMAKE_CURRENT_LIST_DIR}/include/test_struct/test_struct.hpp
)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../../build/pybind11 build_pybind11)
pybind11_add_module(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})

# target_link_directories(${PROJECT_NAME} PRIVATE "${PYTHON_ROOT}/libs")