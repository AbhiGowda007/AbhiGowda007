#include "MyWidget.h"

#include <QApplication>
#include<QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.getFile_Path(qApp->applicationDirPath());
    w.loading_Dll("MyData.csv");
    w.loading_Dll("My_Data.db");
    w.loading_Dll("Mydata.xml");
    return a.exec();
}
