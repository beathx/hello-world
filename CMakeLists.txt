#### ------- CMakLists ----------
cmake_minimum_required(VERSION 2.8)

project(example_project)  

find_package(OpenCV 3 REQUIRED)

add_executable(main main.cpp)

target_link_libraries(main ${OpenCV_LIBS})
