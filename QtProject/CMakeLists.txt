cmake_minimum_required(VERSION 3.5)

project(IndianRestaraunts VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_PREFIX_PATH "/usr/local/opt/qt/6.2.3_1/lib/cmake")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        src/main.cpp
        src/mainwindow.cpp
        src/mainwindow.h
        src/mainwindow.ui
        src/model_view.h
        src/model_view.cpp
        src/proxy_model.h
        src/proxy_model.cpp
        src/dialog.h
        src/dialog.cpp
        src/dialog.ui
        src/searchdialog.h
        src/searchdialog.cpp
        src/searchdialog.ui
)


#qt6_wrap_ui(UIS_HDRS
#    src/mainwindow.ui
#    src/dialog.ui
#    src/searchdialog.ui
#)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(IndianRestaraunts
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET IndianRestaraunts APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(IndianRestaraunts SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(IndianRestaraunts
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(IndianRestaraunts PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(IndianRestaraunts PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS IndianRestaraunts
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(IndianRestaraunts)
endif()
