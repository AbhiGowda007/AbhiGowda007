#ifndef MYQDIR_H
#define MYQDIR_H

#include <QObject>
#include<QDebug>
#include<QFileInfo>
#include<QDir>
#include<QStringList>
#include<QFile>

class MyQDir : public QObject
{
    Q_OBJECT
public:
    explicit MyQDir(QObject *parent = nullptr);

    void setItems(QString  path);

signals:

private:
    QDir m_Directory;

};

#endif // MYQDIR_H
