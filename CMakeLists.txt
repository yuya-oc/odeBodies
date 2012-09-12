
cmake_minimum_required(VERSION 2.8)

find_package(ODE REQUIRED OPTIONAL_COMPONENTS drawstuff)

if(DS_FOUND)
	add_library(odeBodies
		bodies.cpp
		draw.cpp
	)
else()
	add_library(odeBodies
		bodies.cpp
	)
endif()

target_link_libraries(odeBodies ${ODE_LIBS})
