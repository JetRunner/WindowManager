cmake_minimum_required(VERSION 3.12)
project(WindowManager)

set(CMAKE_CXX_STANDARD 11)

add_executable(WindowManager main.cpp Window.cpp Window.h WindowManager.cpp WindowManager.h consts.h Screen.cpp Screen.h)