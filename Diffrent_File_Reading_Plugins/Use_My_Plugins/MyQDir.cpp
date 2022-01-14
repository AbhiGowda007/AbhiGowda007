#include "MyQDir.h"

MyQDir::MyQDir(QObject *parent) : QObject(parent)
{

}

void MyQDir::setItems(QString  path)
{

    QDir const source(path);
    if (!source.exists())
        return;

    QStringList const files = source.entryList(QStringList() << ".dll", QDir::Files);
    QStringList const folders = source.entryList(QDir::NoDot | QDir::NoDotDot | QDir::Dirs);

    QStringList const all = folders + files;

    for (QString const& name: all)
    {
        QString const fullPathName = path + QDir::separator() + name;
        if (QFileInfo(fullPathName).isDir())
        {
            setItems(fullPathName, level++);
            continue;
        }
        qDebug() << "Level " << level << " " << fullPathName;
    }

}




