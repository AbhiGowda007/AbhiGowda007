#ifndef INTERFACE_PLUGINS_H
#define INTERFACE_PLUGINS_H

#include<QString>
#include<QtPlugin>

#define Interface_Plugins_IID "com.abishek.1.0"

class  InterFace_Plugins
{
public:

    virtual void readData(QString)=0;

};
Q_DECLARE_INTERFACE(InterFace_Plugins,Interface_Plugins_IID)


#endif // INTERFACE_PLUGINS_H
