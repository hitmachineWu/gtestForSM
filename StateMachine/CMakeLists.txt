cmake_minimum_required(VERSION 3.10)

project(aeb_ut)

add_definitions(-DMODULE_NAME="${PROJECT_NAME}")

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(./)


enable_testing()

file(GLOB SRC_LISTS ${CMAKE_SOURCE_DIR}/src/*.c ${CMAKE_SOURCE_DIR}/InitOper/*.c ) 
message(${SRC_LISTS})
add_executable(aeb_ut test.cpp ${SRC_LISTS})
# target_link_libraries(aeb_ut gtest pthread)

target_link_libraries( aeb_ut
        ${GTEST_BOTH_LIBRARIES}
        pthread )

gtest_discover_tests(aeb_ut)