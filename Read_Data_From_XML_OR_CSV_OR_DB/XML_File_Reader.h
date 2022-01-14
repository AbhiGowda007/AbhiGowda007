#ifndef XML_FILE_READER_H
#define XML_FILE_READER_H

#include <QObject>
#include<QStringList>
#include "File_Reader.h"
#include<QDebug>
#include<QDomDocument>
#include<QDomNode>
#include<QFile>
#include<QtXml>
#include<QDomElement>


class XML_File_Reader : public File_Reader
{
    Q_PROPERTY(QStringList xmldata READ getMyXMLData WRITE setMyXMLData  NOTIFY xmldataChanged)
public:
    explicit XML_File_Reader(QObject *parent = nullptr);

    const QStringList &getMyXMLData() const;
    void setMyXMLData(const QStringList &newMyXMLData);

     void read_File(QString file) override;
signals:
    void xmldataChanged();

private:
    QStringList myXMLData;
};

#endif // XML_FILE_READER_H
