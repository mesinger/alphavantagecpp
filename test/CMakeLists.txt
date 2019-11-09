MESSAGE(STATUS "API key for unit tests = ${API_KEY}")

link_directories(${DEBUG_ROOT}/alphavantagecpp)

add_executable(test reqtest.cpp main.cpp)
target_link_libraries(test alphavantagecpp)
target_compile_definitions(test PUBLIC API_KEY="${API_KEY}")