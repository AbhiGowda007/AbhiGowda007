#include "File_Reader.h"

void File_Reader::readData_Csv(QString file)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    qDebug()<<Q_FUNC_INFO<<"*****************My__File Path********************======"<<file<<Qt::endl;

    QFile Myfile(file);
    if (!(Myfile.open(QIODevice::ReadOnly | QIODevice::Text)))
    {
        qDebug()<<"******CSV____File_______Not____Found*****"<<Qt::endl;
        exit(0);
    }
    else
    {
        qDebug()<<"******CSV____File____Found*****"<<Qt::endl;
    }
    QString line;
    QTextStream in(&file);
    while (!Myfile.atEnd())
    {
        line = Myfile.readLine();
        qDebug()<<"***********Data Inside The Loop**************====="<<line<<Qt::endl;
        myData.append(line);
        qDebug()<<Q_FUNC_INFO<<"********My______Data__***********====="<<myData<<Qt::endl;
    }
}

void File_Reader::readData_Xml(QString file)
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

void File_Reader::readData_Db(QString)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    qDebug()<<"*****Inside_DB___ReadData____Function******"<<Qt::endl;
}
