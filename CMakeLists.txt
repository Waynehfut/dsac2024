cmake_minimum_required(VERSION 3.28)
project(dsac2024 C)

set(CMAKE_C_STANDARD 11)

add_executable(dsac2024 main.c
        02list/list.c
        02list/list.h
        01intro/intro.h
        01intro/intro.c)
