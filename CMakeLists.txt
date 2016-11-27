cmake_minimum_required(VERSION 3.6)
project(Nine)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/Modules/")

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
message("Including allegro...")
#find_package(allegro 5.1 COMPONENTS main image primative color)
#if (NOT allegro_FOUND)
#    message(ERROR " Allegro not found!")
#endif(NOT allegro_FOUND)
INCLUDE_DIRECTORIES(/usr/local/Cellar/allegro/5.2.0/include)
LINK_DIRECTORIES(/usr/local/Cellar/allegro/5.2.0/lib)

file(GLOB LIBRARIES "/usr/local/Cellar/allegro/5.2.0/lib/*.dylib")


include_directories(include)


set(SOURCES
        src/Launcher.cpp)


add_executable(Nine ${SOURCES} ${HEADERS})
target_link_libraries(Nine ${LIBRARIES})