#ifndef XML_PLUGINS_H
#define XML_PLUGINS_H

#include "XML_Plugins_global.h"
#include"InterFace_Plugins.h"
#include<QObject>
#include<QStringList>
#include <QDebug>
#include <QDomDocument>
#include <QDomNode>
#include <QFile>
#include <QtXml>
#include<QDomElement>
#include <QtPlugin>

class XML_PLUGINS_EXPORT XML_Plugins:public QObject,public InterFace_Plugins
{
    Q_OBJECT
    Q_INTERFACES(InterFace_Plugins)
    Q_PLUGIN_METADATA(IID Interface_Plugins_IID)
public:
    explicit XML_Plugins(QObject *parent = nullptr){};

     void readData(QString) override;
     void readXmlFile(QString);
private:
    QStringList myXMLData;
    QDir m_dir;
};

#endif // XML_PLUGINS_H
