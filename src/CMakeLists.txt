set(BINARY ${CMAKE_PROJECT_NAME})

set(SOURCES main.cpp Pizza.cpp Pizza.h)

add_executable(${BINARY}_run ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES})