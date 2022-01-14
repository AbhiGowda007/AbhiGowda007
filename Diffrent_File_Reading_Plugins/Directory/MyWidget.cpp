#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
}

MyWidget::~MyWidget()
{
}

void MyWidget::setItems(QString path)
{
    m_directory.setPath(path);

    QStringList  files = m_directory.entryList(QDir::Files);
      for(int i=0;i<files.length();i++)
      {
           qDebug()<<"****My FIles**********==="<<files[i]<<Qt::endl;
           m_fileInfo.setFile(files[i]);
           qDebug()<<"****My File Path**********==="<<m_fileInfo.absolutePath()<<Qt::endl;
      }
}

