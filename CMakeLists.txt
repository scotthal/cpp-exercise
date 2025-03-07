cmake_minimum_required(VERSION 3.31)

enable_testing()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest
  GIT_TAG v1.16.0
  GIT_SHALLOW ON
)
FetchContent_MakeAvailable(googletest)

project(cpp-exercise VERSION 0.0.0 LANGUAGES CXX)

add_library(exercise)
target_sources(
  exercise
  PRIVATE
  exercise.cpp
)

add_executable(${PROJECT_NAME})
target_sources(
  ${PROJECT_NAME}
  PRIVATE
  main.cpp
  exercise.cpp
)
target_link_libraries(
  ${PROJECT_NAME}
  exercise
)

add_executable(exercise-test)
target_sources(
  exercise-test
  PRIVATE
  exercise-test.cpp
)
target_link_libraries(
  exercise-test
  exercise
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(exercise-test)
