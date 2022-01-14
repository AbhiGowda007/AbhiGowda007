#include "File_Path.h"

File_Path::File_Path(QObject *parent) : QObject(parent)
{
    qDebug()<<"****************File_Path Constructor is Called*****************"<<Qt::endl;
}

void File_Path::my_File_Path(QString filePath)
{
    QFileInfo fileInfo(filePath);

    QString fileType = fileInfo.suffix();

    if (fileType == "csv")
    {
        qDebug()<<"*******************File Type is CSV********************"<<Qt::endl;

        m_fileReader = new CSV_File_Reader;
    }
    else if (fileType == "xml")
    {
        qDebug()<<"*******************File Type is Xml********************"<<Qt::endl;

        m_fileReader = new XML_File_Reader;
    }
    else if (fileType == "db")
    {
        m_fileReader = new DB_File_Reader;
    }
    else
    {
        qDebug() << Q_FUNC_INFO << "***************************Invalid____file_____type***********************"<<Qt::endl;
    }
    if (m_fileReader != nullptr)
    {
        m_fileReader->read_File(filePath);
    }
}
