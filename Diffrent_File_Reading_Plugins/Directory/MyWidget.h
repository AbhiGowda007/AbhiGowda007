#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include<QDir>
#include<QStringList>
#include<QDebug>
#include<QFileInfo>
#include<QFile>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

    void setItems(QString  path);

private:
    QDir m_directory;
    QFileInfo m_fileInfo;
};
#endif // MYWIDGET_H
