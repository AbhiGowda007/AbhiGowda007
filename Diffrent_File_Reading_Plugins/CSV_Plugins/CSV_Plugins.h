#ifndef CSV_PLUGINS_H
#define CSV_PLUGINS_H

#include "CSV_Plugins_global.h"
#include"InterFace_Plugins.h"
#include <QObject>
#include<QStringList>
#include<QDebug>
#include<QFile>
#include<QDir>
#include <QtPlugin>

class CSV_PLUGINS_EXPORT CSV_Plugins:public QObject,public InterFace_Plugins
{
    Q_OBJECT
    Q_INTERFACES(InterFace_Plugins)
    Q_PLUGIN_METADATA(IID Interface_Plugins_IID)

public:
    explicit CSV_Plugins(QObject *parent = nullptr){};
    void readData(QString) override;
    void readfile(QString);

private:
    QStringList myData;
    QDir m_dir;
};

#endif // CSV_PLUGINS_H
