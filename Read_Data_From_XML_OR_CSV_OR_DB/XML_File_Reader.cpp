#include "XML_File_Reader.h"

XML_File_Reader::XML_File_Reader(QObject *parent) : File_Reader(parent)
{
    qDebug()<<"****************XML_File_Reader Constructor is Called**************"<<Qt::endl;
}

const QStringList &XML_File_Reader::getMyXMLData() const
{
    return myXMLData;
}
void XML_File_Reader::setMyXMLData(const QStringList &newMyXMLData)
{
    myXMLData = newMyXMLData;
}

void XML_File_Reader::read_File(QString file)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    QString xmlfilename;
    QFile xmlfile(file);
    qDebug()<<"**********My_____________XML______File_____Version*****==="<<xmlfilename<<Qt::endl;
    if(!xmlfile.open(QIODevice::ReadOnly))
    {
        qDebug()<<"***********My_____XML____File____Is___Loaded************"<<Qt::endl;
    }
    QDomDocument xmldoc;
    if(!xmldoc.setContent(&xmlfile))
    {
        qDebug()<<"***********My_____XML____File____Is___NOT___Loaded************"<<Qt::endl;
    }
    QDomElement xmldocElem=xmldoc.documentElement();
    QDomNodeList nodeList=xmldocElem.elementsByTagName("user");
    qDebug()<<"*******My____Node__List is__***********======"<< nodeList.count()<< Qt::endl;
    for(int i=0;i<nodeList.count();i++)
    {
        QDomElement el=nodeList.at(i).toElement();
        qDebug()<<"****************Elements____IN_____My____XML******************"<< el.nodeName()<< el.tagName() << el.attribute("type")<<Qt::endl;
        if(el.attribute("type")!=NULL)
        {
            myXMLData.append(el.attribute("type"));
            qDebug()<<"********Attribute  Found**************"<<Qt::endl;
        }
        else {
            qDebug()<<"********Attribute  Not Found**************"<<Qt::endl;
        }
    }
    xmlfile.close();
}
