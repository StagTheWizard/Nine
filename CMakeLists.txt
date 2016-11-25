cmake_minimum_required(VERSION 3.6)
project(Nine)

set(CMAKE_CXX_STANDARD 11)


# Including OpenGL...
message("Including OpenGL...")
find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIRS})
link_directories(${OpenGL_LIBRARY_DIRS})
add_definitions(${OpenGL_DEFINITIONS})
if (NOT OPENGL_FOUND)
    message(ERROR " OpenGL not found!")
endif(NOT OPENGL_FOUND)


# Including GLEW
message("Including GLEW...")
find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIRS})
link_directories(${GLEW_LIBRARY_DIRS})
add_definitions(${GLEW_DEFINITIONS})
if (NOT GLEW_FOUND)
    message(ERROR " GLEW not found!")
endif(NOT GLEW_FOUND)


# Including Allegro
message("Including Allegro...")
find_package(Allegro REQUIRED)
if (NOT Allegro_FOUND)
    message(ERROR " Allegro not found!")
endif(NOT Allegro_FOUND)



include_directories(include)


set(SOURCES
        src/Launcher.cpp)


add_executable(Nine ${SOURCES} ${HEADERS})