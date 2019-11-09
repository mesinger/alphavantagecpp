cmake_minimum_required(VERSION 3.0)

project(alphavantagecpp VERSION 0.2.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

include_directories(include)
link_directories(lib)

file(GLOB SOURCES
        include/alphavantagecpp/api/stocktimeseries/*.hpp
        include/alphavantagecpp/api/*.hpp
        include/alphavantagecpp/nw/*.hpp
        include/alphavantagecpp/util/*.hpp
        include/alphavantagecpp/*.hpp
        src/alphavantagecpp/api/*.cpp
        src/alphavantagecpp/nw/*.cpp
        src/alphavantagecpp/util/*.cpp
        )

add_library(alphavantagecpp SHARED ${SOURCES})

target_link_libraries(alphavantagecpp libcurl)
