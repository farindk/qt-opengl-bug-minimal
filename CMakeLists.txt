cmake_minimum_required(VERSION 3.10)
project(qtopenglbug)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)


include_directories(.)

add_executable(qtopenglbug
        qt-main/MainWindow.cpp qt-main/MainWindow.h qt-main/FileBrowserWidget.cpp qt-main/FileBrowserWidget.h
        qt-main/EditorWidget.h qt-main/EditorWidget.cc)


# ---QtWidgets / QtGui library

find_package(Qt5Widgets CONFIG REQUIRED)
find_package(Qt5Gui CONFIG REQUIRED)
include_directories(${Qt5Widgets_INCLUDE_DIRS})

target_link_libraries(qtopenglbug ${Qt5Gui_LIBRARIES})
target_link_libraries(qtopenglbug ${Qt5Widgets_LIBRARIES})
target_link_libraries(qtopenglbug GL)
