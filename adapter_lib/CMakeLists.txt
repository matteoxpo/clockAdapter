cmake_minimum_required(VERSION 3.10)

project(AdapterModule LANGUAGES CXX)


add_library(DigitalClockAdapter STATIC 
    DigitalClockAdapter.cpp
    DigitalClockAdapter.hpp
    AClock.hpp
    Time.hpp
    Time.cpp
)

target_include_directories(
    DigitalClockAdapter
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../adaptee_lib
)


target_link_libraries(DigitalClockAdapter AnalogClock)
