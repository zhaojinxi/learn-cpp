cmake_minimum_required(VERSION 3.0.0)

# set(CMAKE_C_COMPILER "clang")
# set(CMAKE_CXX_COMPILER "clang++")

project(learn-cpp VERSION 0.1.0)

set(CMAKE_CXX_FLAGS "-Wall -std=c++20 -stdlib=libc++")

# set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -pedantic-errors -Weffc++ -Wextra -Wsign-conversion -Werror -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O4 -DNDEBUG")
set(CMAKE_CXX_FLAGS_MINSIZEREL "-Os -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")

#aux_source_directory(. sources)

add_executable(main main.cpp)