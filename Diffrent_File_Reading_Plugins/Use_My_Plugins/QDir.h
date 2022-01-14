#ifndef QDIR_H
#define QDIR_H

#include <QObject>
#include<QDebug>
#include<QFileInfo>
#include<QDir>
#include<QStringList>
#include<QFile>

class QDir : public QObject
{
    Q_OBJECT
public:
    explicit QDir(QObject *parent = nullptr);

    void entryList(QString  path);

signals:
private:
    QDir myDirectory;

};

#endif // QDIR_H
