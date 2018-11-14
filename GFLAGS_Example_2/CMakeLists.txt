cmake_minimum_required(VERSION 2.8) 
PROJECT(Example_1)

set(NAME_SRC
	src/main_1.cc
	src/main_2.cc
	src/test_1.cc	
)

set(NAME_HEADERS       
    include/test_1.h
    include/main_2.h
)

find_package(gflags REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++0x")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
link_directories(${CMAKE_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
add_executable(test_1 ${NAME_SRC})

target_link_libraries(test_1 gflags)


