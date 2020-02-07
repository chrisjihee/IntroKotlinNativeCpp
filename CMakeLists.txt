cmake_minimum_required(VERSION 3.10)
project(IntroKotlinNativeCpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(sample SHARED IMPORTED)
set_target_properties(sample PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/lib/libsample.so)

add_executable(IntroKotlinNativeCpp source/main.cpp include/libsample_api.h)
target_link_libraries(IntroKotlinNativeCpp sample pthread dl)
