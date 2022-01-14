QT -= gui
QT += xml

TEMPLATE = lib
DEFINES += PLUGINS_READ_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    File_Reader.cpp \
    Plugins_Read.cpp

DESTDIR = ../bin

HEADERS += \
    File_Reader.h \
    Plugins_Read_global.h \
    Plugins_Read.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
