cmake_minimum_required(VERSION 4.0)
set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD a9e1cf81-9932-4810-974b-6eccaf14e457)
set(PROJECT_NAME run)
set(EXECUTABLE run)
project(${PROJECT_NAME} LANGUAGES CXX)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_MODULE_STD ON)

# 添加可执行文件
add_executable(${EXECUTABLE} src/main.cpp)
# target_sources(${EXECUTABLE}
#     PUBLIC
#         FILE_SET cxx_modules TYPE CXX_MODULES
#         FILES modules/hello.ixx
#     PRIVATE
#         modules/hello.cpp
# )