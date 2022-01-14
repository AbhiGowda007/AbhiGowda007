#include "ReadData.h"
#include<QPluginLoader>
#include<QApplication>
#include<QDebug>
#include"InterFace_Plugins.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ReadData readdata;
    readdata.setFolderPath("E:/Diffrent_File_Reading_Plugins/bin");
    readdata.getFile_Path(qApp->applicationDirPath());
    return a.exec();
}
