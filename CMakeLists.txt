cmake_minimum_required(VERSION 3.25.0)
project(designPatterns VERSION 0.1.0 LANGUAGES C CXX)

add_executable(designPatterns
        src/main.cpp
        include/creational/SimpleFactory.h
        include/creational/FactoryMethod.h
        include/creational/AbstractFactory.h
        include/creational/Singleton.h
)

