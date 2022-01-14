#include "File_Reader.h"
#include <QFileInfo>

File_Reader::File_Reader(QObject *parent) : QObject(parent)
{
    qDebug()<<"*******************File_Reader Constructor is Called*****************"<<Qt::endl;

}

void File_Reader::read_File(QString file)
{
    qDebug()<<"*****************Inside Read_File********************"<<Qt::endl;
    qDebug()<<"*************"<<Q_FUNC_INFO<<"****************"<<Qt::endl;
}

void File_Reader::write_File()
{
    qDebug()<<"*****************Inside Write_File********************"<<Qt::endl;
    qDebug()<<"*************"<<Q_FUNC_INFO<<"****************"<<Qt::endl;
}
