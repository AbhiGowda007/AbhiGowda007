#ifndef CSV_FILE_READER_H
#define CSV_FILE_READER_H

#include "File_Reader.h"
#include<QDebug>
#include<QStringList>
#include<QDebug>
#include<QFile>
#include<QDir>

class CSV_File_Reader : public File_Reader
{
    Q_PROPERTY(QStringList data READ getMyData WRITE setMyData  NOTIFY dataChanged)

public:
    explicit CSV_File_Reader(QObject *parent = nullptr);

    const QStringList &getMyData() const;
    void setMyData(const QStringList &newMyData);

    void read_File(QString file) override;

signals:
    void dataChanged();

private:
    QStringList myData;

};

#endif // CSV_FILE_READER_H
