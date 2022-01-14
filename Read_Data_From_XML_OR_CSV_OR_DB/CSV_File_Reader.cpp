#include "CSV_File_Reader.h"

CSV_File_Reader::CSV_File_Reader(QObject *parent) : File_Reader(parent)
{
    qDebug()<<"****************CSV_File_Reader Constructor is Called*****************"<<Qt::endl;
}

const QStringList &CSV_File_Reader::getMyData() const
{
    return myData;
}

void CSV_File_Reader::setMyData(const QStringList &newMyData)
{
    myData = newMyData;
}

void CSV_File_Reader::read_File(QString file)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    qDebug()<<Q_FUNC_INFO<<"*****************My__File Path********************======"<<file<<Qt::endl;

    QFile Myfile(file);
    if (!(Myfile.open(QIODevice::ReadOnly | QIODevice::Text)))
    {
        qDebug()<<"******CSV____File_______Not____Found*****"<<Qt::endl;
        exit(0);
    }
    else
    {
        qDebug()<<"******CSV____File____Found*****"<<Qt::endl;
    }
    QString line;
    QTextStream in(&file);
    while (!Myfile.atEnd())
    {
        line = Myfile.readLine();
        qDebug()<<"***********Data Inside The Loop**************====="<<line<<Qt::endl;
        myData.append(line);
        qDebug()<<Q_FUNC_INFO<<"********My______Data__***********====="<<myData<<Qt::endl;
    }
}
