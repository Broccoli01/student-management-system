cmake_minimum_required(VERSION 3.10)
project(StudentManagementSystem)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含头文件目录
include_directories(include)

# 添加可执行文件
add_executable(student_management_system
    src/main.cpp
    src/Student.cpp
    src/StudentManager.cpp
)

# 设置输出目录
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)