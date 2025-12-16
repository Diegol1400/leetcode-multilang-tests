cmake_minimum_required(VERSION 3.22)

set(This two_sum)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

set(Headers 
    two_sum.hpp
)

set(Sources
    two_sum.cpp 
    )

add_library(${This} STATIC ${Sources} ${Headers})

target_include_directories(${This} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(test)
