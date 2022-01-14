#include "DB_File_Reader.h"

DB_File_Reader::DB_File_Reader(QObject *parent) : File_Reader(parent)
{
    qDebug()<<"***************DB_File_Reader Constructor is Called*************"<<Qt::endl;
}

void DB_File_Reader::read_File(QString file)
{

}
