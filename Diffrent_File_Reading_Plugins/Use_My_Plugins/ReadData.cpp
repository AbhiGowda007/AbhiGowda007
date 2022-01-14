#include "ReadData.h"

ReadData::ReadData(QWidget *parent)
    : QWidget(parent)
{
}
ReadData::~ReadData()
{
}

void ReadData::getFile_Path(QString path)
{
    m_directory.setPath(path);
    qDebug()<<"*************pathhhhh=======***************==="<<path<<Qt::endl;
    QStringList  files = m_directory.entryList(QStringList()<<"*.dll",QDir::Files);
    qDebug()<<"*************====filesssss===***************==="<<files<<Qt::endl;
    for(int i=0;i<files.length();i++)
    {
        if(files[i]=="InterFace_Plugins.dll")
            continue;
        qDebug()<<"*************My_FIles_Name=======***************==="<<files[i]<<Qt::endl;

//        qDebug()<<"****My_Files_Path**********==========="<<m_fileInfo.absolutePath()<<Qt::endl;
        QString dllPath=path+"/"+files[i];
        qDebug()<<"diipath"<<dllPath;
        read_Dll(dllPath);
        //        read_Dll(m_fileInfo.absolutePath());
    }
}

void ReadData::read_Dll(QString filename)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    QPluginLoader loadPlugin;
    loadPlugin.setFileName(filename);
    if(!loadPlugin.load())
    {
        qDebug()<<"*****Plugin_Not_Found*****"<<Qt::endl;
        return;
    }

    else
    {
        qDebug() << Q_FUNC_INFO << "*************************PluginFound*************************"<<Qt::endl;
    }

    QObject *obj=loadPlugin.instance();
    InterFace_Plugins* myObject=qobject_cast<InterFace_Plugins*>(obj);
    myObject->readData(folderPath);
}

const QString &ReadData::getFolderPath() const
{
    return folderPath;
}

void ReadData::setFolderPath(const QString &newFolderPath)
{
    folderPath = newFolderPath;
}




