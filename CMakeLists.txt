cmake_minimum_required(VERSION 3.25)
project(CinemaApplication)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_HEADERS_DIR ${PROJECT_SOURCE_DIR}/headers)
set(PROJECT_SOURCES_DIR ${PROJECT_SOURCE_DIR}/sources)
include_directories(${PROJECT_HEADERS_DIR})
include_directories(${PROJECT_SOURCES_DIR})

set(SOURCE_FILES
        main.cpp
        ${PROJECT_HEADERS_DIR}/Cinema.h
        ${PROJECT_SOURCES_DIR}/Cinema.cpp
        ${PROJECT_HEADERS_DIR}/Bilhete.h
        ${PROJECT_SOURCES_DIR}/Bilhete.cpp
        )


add_executable(CinemaApplication ${SOURCE_FILES})
