cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(sixled_project)

pico_sdk_init()

add_executable(sixled sixled.c)

pico_enable_stdio_usb(sixled 1)
pico_enable_stdio_uart(sixled 0)

pico_add_extra_outputs(sixled)

target_link_libraries(sixled pico_stdlib)
