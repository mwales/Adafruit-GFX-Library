cmake_minimum_required(VERSION 2.8)

set(SOURCE_FILES Adafruit_GFX.cpp
                 AdafruitCommon.cpp
                 Print.cpp)

add_library(Adafruit_GFX ${SOURCE_FILES})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11 -Wall")



