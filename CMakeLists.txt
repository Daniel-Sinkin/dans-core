cmake_minimum_required(VERSION 3.20)

project(dans_core LANGUAGES CXX)

add_library(dans_core INTERFACE)
add_library(dans::core ALIAS dans_core)

target_compile_features(dans_core INTERFACE cxx_std_23)
target_include_directories(dans_core INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)
