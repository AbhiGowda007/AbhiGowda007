#ifndef FILE_READER_H
#define FILE_READER_H

#include <QObject>
#include<QDebug>
#include <QFile>


class File_Reader : public QObject
{
    Q_OBJECT
public:
    explicit File_Reader(QObject *parent = nullptr);



    virtual void read_File(QString file);

    virtual void write_File();


signals:

};

#endif // FILE_READER_H
