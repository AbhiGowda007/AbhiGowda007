#ifndef READDATA_H
#define READDATA_H

#include <QWidget>
#include<QDebug>
#include <QFile>
#include <QFileInfo>
#include"InterFace_Plugins.h"
#include<QDir>

class ReadData : public QWidget
{
    Q_OBJECT

public:
    ReadData(QWidget *parent = nullptr);
    ~ReadData();

    void getFile_Path(QString  path);
    void read_Dll(QString);


    const QString &getFolderPath() const;
    void setFolderPath(const QString &newFolderPath);

private:
    InterFace_Plugins *m_interface=nullptr;
    QString folderPath;
    QDir m_directory;
    QFileInfo m_fileInfo;

};
#endif // READDATA_H
