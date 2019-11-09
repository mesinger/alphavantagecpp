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

target_link_libraries(alphavantagecpp PRIVATE libcurl)
target_include_directories(alphavantagecpp PUBLIC include)
