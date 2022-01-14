#ifndef DB_FILE_READER_H
#define DB_FILE_READER_H

#include "File_Reader.h"
#include<QDebug>

class DB_File_Reader : public File_Reader
{
public:
    explicit DB_File_Reader(QObject *parent = nullptr);

    void read_File(QString file) override;
};

#endif // DB_FILE_READER_H
