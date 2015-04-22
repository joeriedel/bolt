project(runtime)

set(SOURCES
	"${PROJECT_SOURCE_DIR}/check_includes.h"
	"${PROJECT_SOURCE_DIR}/runtime.h"
	"${PROJECT_SOURCE_DIR}/runtime_internal.h"
	"${PROJECT_SOURCE_DIR}/serialization.h"
	"${PROJECT_SOURCE_DIR}/serialization.cpp"
)

source_group(Source FILES ${SOURCES})
add_library(${PROJECT_NAME} SHARED ${SOURCES})
