cmake_minimum_required(VERSION 3.23)
project(Strategy)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(Strategy main.cpp)

target_include_directories(Strategy PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR})
