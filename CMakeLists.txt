cmake_minimum_required(VERSION 3.25.0)
project(designPatterns VERSION 0.1.0 LANGUAGES C CXX)

file(GLOB HEADER_FILES "include/**/*.h")

add_executable(designPatterns
    src/main.cpp
    ${HEADER_FILES}
)

