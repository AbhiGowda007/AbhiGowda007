QT += quick xml

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        CSV_File_Reader.cpp \
        DB_File_Reader.cpp \
        File_Path.cpp \
        File_Reader.cpp \
        XML_File_Reader.cpp \
        main.cpp

RESOURCES += qml.qrc
DESTDIR = $$PWD/bin

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    CSV_File_Reader.h \
    DB_File_Reader.h \
    File_Path.h \
    File_Reader.h \
    XML_File_Reader.h
