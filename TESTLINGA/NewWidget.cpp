#include "NewWidget.h"

NewWidget::NewWidget(QWidget *parent)
    : QWidget(parent)
{
    m_but = new QPushButton(tr("OK"));
    m_no = new QPushButton(tr("NO"));

    m_hbox = new QHBoxLayout;
    m_hbox->addWidget(m_but);
    m_hbox->addWidget(m_no);

    this->setLayout(m_hbox);
}

NewWidget::~NewWidget()
{
}

