#ifndef COMPANY_H
#define COMPANY_H
#include<iostream>
#include<QMap>
#include"Employee.h"
#include <QObject>
#include"DatabaseHandler.h"
#include"Task.h"
#include<QtSql>
#include<QList>


using namespace std;

class Company : public QObject
{
    Q_OBJECT
public:
    explicit Company(QObject *parent = nullptr);

    const QString &getCompany_name() const;
    void setCompany_name(const QString &newCompany_name);

    int getProject_Id() const;
    void setProject_Id(int newProject_Id);

    const QString &getProject_Name() const;
    void setProject_Name(const QString &newProject_Name);

private:
    Employee* emp;

    Task* task;

    QString Company_name;
    int Project_Id;
    QString Project_Name;

    DatabaseHandler data;

    //**QMAp for Employee****
    QMap<int,Employee*>EmployeeMap;
    QMap<int,Employee*>::Iterator itr;

    //***QMap for Task****
    QMap<int,Task*>TaskMap;

    QMap<int,Task*>::Iterator itr1;


       QList<Employee*>retemp;

        QList<Task*>returntask;
public:
    Q_INVOKABLE void add_Task();
    Q_INVOKABLE void remove_Task();
    Q_INVOKABLE void company_details();
    Q_INVOKABLE void registerpage(int,QString ,QString ,QString,QString);
    Q_INVOKABLE void registerpage(Employee*);
    Q_INVOKABLE void print();

    Q_INVOKABLE QList<Employee*>retriveDataFromDB();

       Q_INVOKABLE void taskPage(Task*);

        Q_INVOKABLE void printTask();

        Q_INVOKABLE QList<Task*>retriveTaskFromDB();


signals:


};

#endif // COMPANY_H
