#ifndef FILE_READER_H
#define FILE_READER_H

#include "Plugins_Read.h"
#include<Plugins_Read_global.h>
#include <QObject>
#include <QObject>
#include<QStringList>
#include <QDomDocument>
#include <QDomNode>
#include<QDebug>
#include<QFile>
#include <QtXml>
#include<QDir>
#include<QDomElement>
#include <QtPlugin>

class PLUGINS_READ_EXPORT File_Reader :public QObject, public Plugins_Read
{
    Q_OBJECT
    Q_INTERFACES(Plugins_Read)
    Q_PLUGIN_METADATA(IID Plugins_Read_IID)
public:
    explicit File_Reader(QObject *parent = nullptr){}

    void readData_Csv(QString) override;
    void readData_Xml(QString) override;
    void readData_Db(QString) override;

private:
    QStringList myData;
    QStringList myXMLData;
};

#endif // FILE_READER_H
