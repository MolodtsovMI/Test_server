cmake_minimum_required(VERSION 3.5)

project(Test-server LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(Test-server
  main.cpp
  mainwindow.cpp
  threadcontroller.cpp
  telecomserver.cpp
)

target_link_libraries(Test-server PRIVATE Qt5::Widgets)
