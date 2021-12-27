cmake_minimum_required(VERSION 3.16)
project(CSE_2100)

set(CMAKE_C_STANDARD 99)

add_executable(CSE_2100 main.c functions/add_StudentDetails.c  functions/delete_StudentDetails.c  functions/display_StudentDetails.c)