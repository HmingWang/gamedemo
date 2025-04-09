cmake_minimum_required(VERSION 3.22)

add_subdirectory(SDL EXCLUDE_FROM_ALL)

add_executable(hello hello.c)
target_link_libraries(hello PRIVATE SDL3::SDL3)

