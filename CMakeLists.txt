cmake_minimum_required(VERSION 3.0)
project(p8730mxo09 CXX)

add_executable(main MACOSX_BUNDLE main.cpp)

set(CPACK_GENERATOR "DRAGNDROP")
include(CPack)