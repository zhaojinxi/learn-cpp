cmake_minimum_required(VERSION 3.0.0)
project(learn-cpp VERSION 0.1.0)

set(CMAKE_CXX_COMPILER "/usr/bin/clang++-11")
set(CMAKE_CXX_FLAGS "-Wall -std=c++20")
# set(CMAKE_CXX_FLAGS_DEBUG "-O0 -pedantic-errors -Weffc++ -Wextra -Wsign-conversion -Werror -g")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O4 -DNDEBUG")
set(CMAKE_CXX_FLAGS_MINSIZEREL "-Os -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")

aux_source_directory(. sources)

add_executable(learn-cpp ${sources})

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)