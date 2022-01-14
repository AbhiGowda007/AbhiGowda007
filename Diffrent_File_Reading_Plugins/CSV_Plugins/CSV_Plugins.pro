QT -= gui

TEMPLATE = lib
DEFINES += CSV_PLUGINS_LIBRARY

INCLUDEPATH +=../InterFace_Plugins
CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CSV_Plugins.cpp
DESTDIR = ../bin
HEADERS += \
    CSV_Plugins_global.h \
    CSV_Plugins.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
