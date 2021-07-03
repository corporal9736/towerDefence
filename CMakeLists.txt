cmake_minimum_required(VERSION 3.5)

project(towerDefence LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILECOMMANDS ON)
set(CMAKE_PREFIX_PATH /home/corporal/cmake)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets Core REQUIRED)

add_executable(towerDefence
  include/define.h
  src/main.cpp
  src/mainwindow.cpp
  include/mainwindow.h
  src/mainwindow.ui
  src/component.cpp
  include/component.h
  src/character.cpp
  include/character.h
  src/tool.cpp
  include/tool.h
)

target_link_libraries(towerDefence Qt6::Widgets Qt6::Core)
