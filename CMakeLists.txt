
cmake_minimum_required(VERSION 2.8)

find_package(ODE REQUIRED)

add_library(odeBodies
odeBodies.cpp
)

target_link_libraries(odeBodies {ODE_LIBS})
