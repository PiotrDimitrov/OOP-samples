cmake_minimum_required(VERSION 3.27)
project(OOP_samples)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP_samples main.cpp
        classAndObj.cpp
        header.h
        classMethod.cpp
        accessModifier.cpp
        getterSetter.cpp
        encapsulation.cpp
        classConstructor.cpp
        constructorOverload.cpp)
