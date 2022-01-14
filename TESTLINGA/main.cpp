#include "NewWidget.h"

#include <QApplication>
#include <QTranslator>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator translator;
        translator.load("E:/TESTLINGA/Kannada.qm");
        a.installTranslator(&translator);
    NewWidget w;
    w.show();
    return a.exec();
}
