
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(generator_classDiagram)

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
set(HEADERS ${PROJECT_SOURCE_DIR}/headers/)
add_executable(${PROJECT_NAME} main.cpp ${SRC_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC ${HEADERS})
