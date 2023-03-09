cmake_minimum_required(VERSION 3.0.0)
project(MyProject VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED 17)

add_executable(MyProject src/main.cpp src/module1.cpp GTest/test.cpp)
target_compile_options(MyProject PRIVATE -O3)

target_link_libraries(MyProject ${GTEST_BOTH_LIBRARIES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
