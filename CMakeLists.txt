cmake_minimum_required (VERSION 3.2)
set (CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
set_property(GLOBAL PROPERTY COTIRE_ADD_UNITY_BUILD FALSE)
set(COTIRE_MINIMUM_NUMBER_OF_TARGET_SOURCES 1)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
include(cotire)
project(Engine)

function(copy_to_output target)
	add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy_if_different
		"$<TARGET_FILE:runtime>"
		"$<TARGET_FILE_DIR:${PROJECT_NAME}>"
	)
endfunction(copy_to_output)

# Project defaults

set(MAKE_TESTS "TRUE" CACHE BOOL "Compile Engine Unit Tests")

add_subdirectory(runtime)

# Add test projects

if (MAKE_TESTS)
	add_subdirectory(unit_tests)
endif (MAKE_TESTS)