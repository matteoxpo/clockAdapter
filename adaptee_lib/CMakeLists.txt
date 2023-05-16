cmake_minimum_required(VERSION 3.10)

project(AdapteeModule LANGUAGES CXX)


add_library(AnalogClock STATIC 
    AnalogClock.cpp 
    AnalogClock.hpp 
    AnalogTimeParams.cpp
    AnalogTimeParams.hpp
)
