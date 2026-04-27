cmake_minimum_required(VERSION 3.25...4.3)

project(SNAKEGL
    VERSION 0.1
    DESCRIPTION "SNAKE GAME USING OPENGL"
    LANGUAGES CXX C
)

set(CMAKE_CXX_STANDARD          23)
set(CMAKE_CXX_EXTENSIONS        off)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)