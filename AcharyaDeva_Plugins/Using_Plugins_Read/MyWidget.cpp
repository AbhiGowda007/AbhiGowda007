#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
}

MyWidget::~MyWidget()
{
}

void MyWidget::loading_Dll(QString filepath)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    QFileInfo fileInfo(filepath);
    QString fileType = fileInfo.suffix();

    QPluginLoader loadPlugin;

    loadPlugin.setFileName(dllPath);
    if(!loadPlugin.load())
    {
        qDebug()<<"*****Plugin_Not_Found*****"<<Qt::endl;
    }
    qDebug()<<"*****Plugin_Found*****"<<Qt::endl;
    QObject *obj=loadPlugin.instance();
    Plugins_Read* myObject=qobject_cast<Plugins_Read*>(obj);
    if (fileType == "csv")
    {
        qDebug()<<"*******************File Type is CSV********************"<<Qt::endl;

        myObject->readData_Csv(filepath);
    }
    else if (fileType == "xml")
    {
        qDebug()<<"*******************File Type is Xml********************"<<Qt::endl;
        myObject->readData_Xml(filepath);
    }
    else if (fileType == "db")
    {
        qDebug()<<"*******************File Type is Xml********************"<<Qt::endl;
        myObject->readData_Db(filepath);
    }
    else
    {
        qDebug() << Q_FUNC_INFO << "***************************Invalid____file_____type***********************"<<Qt::endl;
    }
}

void MyWidget::getFile_Path(QString path)
{
    m_directory.setPath(path);
    qDebug()<<path;

    QStringList  files = m_directory.entryList(QStringList()<<"*.dll",QDir::Files);
    for(int i=0;i<files.length();i++)
    {
        qDebug()<<"*************My_FIles_Name=======***************==="<<files[i]<<Qt::endl;
        dllPath=files[i];
        m_fileInfo.setFile(files[i]);
        qDebug()<<"***********My_Files_Path**********==========="<<m_fileInfo.absolutePath()<<Qt::endl;
    }
}

void MyWidget::read_Dll(QString)
{

}

