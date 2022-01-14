#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include<QDebug>
#include <QFile>
#include <QFileInfo>
#include<QDir>
#include<File_Reader.h>
#include<Plugins_Read.h>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

    void loading_Dll(QString filepath);
    void getFile_Path(QString  path);
    void read_Dll(QString);

private:
    Plugins_Read *m_Polugins=nullptr;
    QDir m_directory;
    QFileInfo m_fileInfo;
    QString dllPath;
};
#endif // MYWIDGET_H
