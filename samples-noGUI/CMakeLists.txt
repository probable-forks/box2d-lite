project(samples-noGUI LANGUAGES CXX)

set (SAMPLE_NOGUI_SOURCE_FILES
	samples-noGUI.cpp)

set (SAMPLE_NOGUI_HEADER_FILES
	samples-noGUI.h)

add_executable(samples-noGUI ${SAMPLE_NOGUI_SOURCE_FILES} ${SAMPLE_NOGUI_HEADER_FILES})

target_link_libraries(samples-noGUI 
	PUBLIC 
		box2d-lite 
)

