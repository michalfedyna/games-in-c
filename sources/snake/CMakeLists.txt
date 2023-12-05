cmake_minimum_required(VERSION 3.20)
project(CPong C)

file(GLOB sources "*.c" "*.h")
add_executable(${PROJECT_NAME} ${sources})

include_directories(includes)
target_link_libraries(${PROJECT_NAME} raylib)
if (APPLE)
	target_link_libraries(${PROJECT_NAME} "-framework IOKit")
	target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
	target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()

