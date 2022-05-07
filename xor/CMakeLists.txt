cmake_minimum_required(VERSION 3.8)
project(XOREncryption)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)

set(SOURCE_FILES
        main.cpp
        EncoderWidget.cpp
        EncoderWidget.h)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Gui Qt5::Widgets)