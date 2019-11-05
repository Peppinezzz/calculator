project(main)

add_library(calculator SHARED calculator.h calculator.cpp)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE calculator)