cmake_minimum_required(VERSION 3.16.3)

project(OpenGLTutorials)

set(PROJECT_DIR ${CMAKE_SOURCE_DIR})

set(PROJECT_INCLUDE_DIR ${PROJECT_DIR}/include)

set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)

set(PROJECT_SOURCES 
        ${PROJECT_SOURCE_DIR}/glad.c
        ${PROJECT_SOURCE_DIR}/stb_image.cpp
        ${PROJECT_SOURCE_DIR}/main.cpp
        ${PROJECT_SOURCE_DIR}/Shader.cpp
        ${PROJECT_SOURCE_DIR}/Texture.cpp
        )



find_package(glm REQUIRED)
include_directories(${PROJECT_INCLUDE_DIR})

find_package(glfw3 3.3 REQUIRED)


add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

target_link_libraries(${PROJECT_NAME} glfw)