cmake_minimum_required (VERSION 2.6)
project (Fourierlibcpp)

add_library(fft FFT.cpp)

add_executable(fouriertest test.cpp)
target_link_libraries(fouriertest fft)

