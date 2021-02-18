cmake_minimum_required(VERSION 3.0.0)
project(learn-cpp VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)

add_executable(learn-cpp main.cpp)

set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -pedantic-errors -Weffc++ -Wextra -Wsign-conversion -Werror -g -ggdb")
# set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
