#include "CSV_Plugins.h"
void CSV_Plugins::readData(QString folderPath)
{
    m_dir.setPath(folderPath);
    qDebug()<<"*************CSV_Files__Folder__Pat***************====="<<folderPath<<Qt::endl;
    QStringList  files = m_dir.entryList(QStringList()<<"*.csv",QDir::Files);
    qDebug()<<"*************====Filesssss===***************==="<<files<<Qt::endl;
    for(int i=0;i<files.length();i++)
    {
        qDebug()<<"*************CSV___file___Name=======***************==="<<files[i]<<Qt::endl;
        QString csvFilePath=folderPath+"/"+files[i];
        qDebug()<<"**********CSV____DLL___Path*******====="<<csvFilePath<<Qt::endl;
        readfile(csvFilePath);
    }
}
void CSV_Plugins::readfile(QString filepath)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    QFile file(filepath);
    if (!(file.open(QIODevice::ReadOnly | QIODevice::Text)))
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
    while (!file.atEnd())
    {
        line = file.readLine();
        qDebug()<<"***********Data Inside The Loop**************====="<<line<<Qt::endl;
        myData.append(line);
        qDebug()<<Q_FUNC_INFO<<"********My__Data***********====="<<myData<<Qt::endl;
    }
}
