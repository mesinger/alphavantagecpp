cmake_minimum_required(VERSION 3.0)

project(alphavantagecpp VERSION 0.3.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

set(DEBUG_ROOT build/debug)
set(RELEASE_ROOT build/release)

add_subdirectory(alphavantagecpp)

#enable_testing()
if(CMAKE_TESTING_ENABLED)
    add_subdirectory(test)
endif()
