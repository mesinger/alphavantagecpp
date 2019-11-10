MESSAGE(STATUS "API key for unit tests = ${API_KEY}")

link_directories(${DEBUG_ROOT}/alphavantagecpp)

add_executable(apitest apitest.cpp main.cpp)
target_link_libraries(apitest alphavantagecpp)
target_compile_definitions(apitest PRIVATE API_KEY="${API_KEY}")