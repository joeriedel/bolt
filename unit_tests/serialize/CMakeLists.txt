project(serialize_unit_test)

SET(SOURCES main.cpp)

source_group(Source FILES ${SOURCES})
add_executable(serialize_unit_test ${SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "UnitTests")
target_link_libraries(${PROJECT_NAME} runtime)

copy_to_output(runtime)

cotire(${PROJECT_NAME})