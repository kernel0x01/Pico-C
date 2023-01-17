cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(6led_project)

pico_sdk_init()

add_executable(6led 6led.c)

pico_enable_stdio_usb(6led 1)
pico_enable_stdio_uart(6led 0)

pico_add_extra_outputs(6led)

target_link_libraries(6led pico_stdlib)
