cmake_minimum_required(VERSION 3.10)
project(IntroKotlinNativeCpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(sample STATIC IMPORTED)
set_target_properties(sample PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/lib/libsample.a)

add_executable(IntroKotlinNativeCpp source/main.cpp)
target_link_libraries(IntroKotlinNativeCpp sample pthread dl)
