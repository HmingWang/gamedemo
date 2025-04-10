cmake_minimum_required(VERSION 3.22)
set(name demo)

project(${name})



set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

add_subdirectory(SDL EXCLUDE_FROM_ALL)


aux_source_directory(. src)
add_executable(${name} ${src})
target_link_libraries(${name} PRIVATE SDL3::SDL3)

