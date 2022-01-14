#ifndef NEWWIDGET_H
#define NEWWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
class NewWidget : public QWidget
{
    Q_OBJECT

public:
    NewWidget(QWidget *parent = nullptr);
    ~NewWidget();
    QPushButton *m_but,*m_no;
    QHBoxLayout *m_hbox;
};
#endif // NEWWIDGET_H
