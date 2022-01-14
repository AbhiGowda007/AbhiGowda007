#ifndef FILE_PATH_H
#define FILE_PATH_H

#include <QObject>
#include<QDebug>
#include <QFile>
#include <QFileInfo>
#include "CSV_File_Reader.h"
#include "XML_File_Reader.h"
#include "DB_File_Reader.h"
#include "File_Reader.h"

class File_Path : public QObject
{
    Q_OBJECT
public:
    explicit File_Path(QObject *parent = nullptr);

    Q_INVOKABLE void my_File_Path(QString filePath);

signals:

private:
    File_Reader *m_fileReader = nullptr;

};

#endif // FILE_PATH_H
