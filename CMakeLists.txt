cmake_minimum_required(VERSION 3.22)
set(name demp)

project(${name})

add_subdirectory(SDL EXCLUDE_FROM_ALL)


aux_source_directory(. src)
add_executable(${name} ${src})
target_link_libraries(${name} PRIVATE SDL3::SDL3)

