cmake_minimum_required(VERSION 2.6)

project(cppquiz CXX)

set(CMAKE_CXX_FLAGS "-std=c++14")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

add_executable(const1 ./cpp/const1.cpp)
add_executable(struct1 ./cpp/struct1.cpp)
add_executable(struct2 ./cpp/struct2.cpp)
add_executable(struct3 ./cpp/struct3.cpp)
add_executable(flow1 ./cpp/flow1.cpp)
add_executable(flow2 ./cpp/flow2.cpp)
add_executable(init1 ./cpp/init1.cpp)
add_executable(init2 ./cpp/init2.cpp)
add_executable(lambda1 ./cpp/lambda1.cpp)
add_executable(lambda2 ./cpp/lambda2.cpp)
add_executable(cast1 ./cpp/cast1.cpp)
add_executable(cast2 ./cpp/cast2.cpp)
add_executable(order1 ./cpp/order1.cpp)
add_executable(order2 ./cpp/order2.cpp)

add_subdirectory(tex)
