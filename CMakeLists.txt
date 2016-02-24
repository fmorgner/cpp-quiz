cmake_minimum_required(VERSION 2.6)
project(cppquiz CXX)

set(CMAKE_CXX_FLAGS "-std=c++14 -Wno-trigraphs")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

add_subdirectory(cpp)
add_subdirectory(tex)
