#ifndef DB_PLUGINS_H
#define DB_PLUGINS_H

#include "DB_Plugins_global.h"
#include"InterFace_Plugins.h"
#include <QObject>
#include<QDebug>
#include <QtPlugin>

class DB_PLUGINS_EXPORT DB_Plugins:public QObject,public InterFace_Plugins
{
    Q_OBJECT
    Q_INTERFACES(InterFace_Plugins)
    Q_PLUGIN_METADATA(IID Interface_Plugins_IID)
public:
    explicit DB_Plugins(QObject *parent = nullptr){};
    void readData(QString) override;
};

#endif // DB_PLUGINS_H
