#include "XML_Plugins.h"

void XML_Plugins::readData(QString  folderPath)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    m_dir.setPath(folderPath);
    qDebug()<<"*************XML___Folder__Path***************==="<<folderPath<<Qt::endl;
    QStringList  files = m_dir.entryList(QStringList()<<"*.xml",QDir::Files);
    qDebug()<<"*************====Files___In__Directory***************==="<<files<<Qt::endl;
    for(int i=0;i<files.length();i++)
    {
        qDebug()<<"*************xmlfile Name***************==="<<files[i]<<Qt::endl;
        QString xmlFilePath=folderPath+"/"+files[i];
        qDebug()<<"XML_____DLL__Path_________=============="<<xmlFilePath<<Qt::endl;
        readXmlFile(xmlFilePath);
    }
}
void XML_Plugins::readXmlFile(QString filePath)
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    QFile xmlfile(filePath);
    qDebug()<<"**********My_____________XML______File_____Version*****==="<<filePath<<Qt::endl;
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
