#include "MyWidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.setItems("E:/Diffrent_File_Reading_Plugins/bin");
    return a.exec();
}
