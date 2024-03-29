#-------------------------------------------------
#
# Project created by QtCreator 2019-06-12T09:08:36
#
#-------------------------------------------------

QT       -= gui

TARGET = cm-lib
TEMPLATE = lib

include(../qmake-target-platform.pri)
include(../qmake-destination-path.pri)

DEFINES += CMLIB_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += source

SOURCES += source/models/client.cpp \
    source/controllers/mastercontroller.cpp \
    source/controllers/navigationcontroller.cpp \
    source/framework/command.cpp \
    source/controllers/commandcontroller.cpp

HEADERS += source/cm-lib_global.h \
  source/models/client.h \
    source/controllers/mastercontroller.h \
    source/controllers/navigationcontroller.h \
    source/framework/command.h \
    source/controllers/commandcontroller.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

DESTDIR = $$PWD/../binaries/$$DESTINATION_PATH
OBJECTS_DIR = $$PWD/build/$$DESTINATION_PATH/.obj
MOC_DIR = $$PWD/build/$$DESTINATION_PATH/.moc
RCC_DIR = $$PWD/build/$$DESTINATION_PATH/.qrc
UI_DIR = $$PWD/build/$$DESTINATION_PATH/.ui
