#ifndef PLUGINS_READ_H
#define PLUGINS_READ_H


#include<QString>
#include<QtPlugin>

#define Plugins_Read_IID "com.abishek.1.0"
class  Plugins_Read
{
public:
    Plugins_Read();
    virtual void readData_Csv(QString)=0;
    virtual void readData_Xml(QString)=0;
    virtual void readData_Db(QString)=0;
};
Q_DECLARE_INTERFACE(Plugins_Read,Plugins_Read_IID)

#endif // PLUGINS_READ_H
