find_package(GTest CONFIG REQUIRED)
include(GoogleTest)

set (TEST_SOURCE_FILES
	body-test.cpp
	collide-test.cpp
	main.cpp
	world-test.cpp
	)

add_executable(box2d_tests ${TEST_SOURCE_FILES})
target_link_libraries(box2d_tests PRIVATE GTest::gtest)

gtest_discover_tests(box2d_tests)