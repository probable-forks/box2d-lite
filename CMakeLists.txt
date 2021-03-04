cmake_minimum_required(VERSION 3.8)

project(box2d-lite LANGUAGES CXX)

include(CTest)

add_subdirectory(src)

option(BOX2D_BUILD_SAMPLES "Build the box2d-lite sample programs" ON)

if (BOX2D_BUILD_SAMPLES)

	add_subdirectory(samples)
	add_subdirectory(samples-noGUI)

	# default startup project for Visual Studio
	if (MSVC)
		set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT samples)
	endif()

endif()

if (BUILD_TESTING)
    enable_testing()
    add_subdirectory(tests)
endif()
