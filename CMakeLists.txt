cmake_minimum_required(VERSION 3.16)

project(morden_C_learn LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(main
	src/main.cpp
	src/Candidate.cpp
)

target_include_directories(main PRIVATE include)
