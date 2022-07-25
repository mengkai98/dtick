cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 14)
project(dtick)
include_directories(
    ./include
)
add_executable(dtick ./src/main.cpp)

install(TARGETS dtick
RUNTIME DESTINATION bin
)