cmake_minimum_required(VERSION 3.26)
project(Progr-C-CPP-2026-Lect)

set(CMAKE_CXX_STANDARD 17)

add_executable(Progr-C-CPP-2026-Lect
        T07/Example-07-09.cpp
        T07/math_tools.h
        T07/math_tools.cpp)

# Дозволяємо компілятору бачити файли всередині T07 без написання повного шляху
target_include_directories(Progr-C-CPP-2026-Lect PUBLIC T07)
