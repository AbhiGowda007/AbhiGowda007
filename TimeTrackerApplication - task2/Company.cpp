#include "Company.h"
#include"QDebug"

Company::Company(QObject *parent) : QObject(parent)
{
    //    qDebug()<<"Company Constructor is called";
}

const QString &Company::getCompany_name() const
{
    //    qDebug()<<"company name";
    return Company_name;
}

void Company::setCompany_name(const QString &newCompany_name)
{
    Company_name = newCompany_name;
}

int Company::getProject_Id() const
{
    //    qDebug()<<"company project id";
    return Project_Id;
}

void Company::setProject_Id(int newProject_Id)
{
    Project_Id = newProject_Id;
}

const QString &Company::getProject_Name() const
{
    //     qDebug()<<"company project name";
    return Project_Name;
}
void Company::setProject_Name(const QString &newProject_Name)
{
    Project_Name = newProject_Name;
}
Q_INVOKABLE void Company::add_Task()
{
    //     qDebug()<<"company add task";
    //    qDebug()<<"Task added";
}
Q_INVOKABLE void Company::remove_Task()
{
    //     qDebug()<<"company task remove";
    //    qDebug()<<"Task removed";
}
void Company::company_details()
{

}
void Company::registerpage(int emp_id, QString emp_name, QString emp_dob, QString emp_email, QString emp_psw)
{
    qDebug()<<"inside register page";

    //    qDebug()<<"employee id="<<emp_id;
    //    qDebug()<<"employee name="<<emp_name;
    //    qDebug()<<"employee dob="<<emp_dob;
    //    qDebug()<<"employee email="<<emp_email;
    //    qDebug()<<"employee psw="<<emp_psw;

}
void Company::registerpage(Employee *worker)
{
    emp=new Employee;

    emp->setEmployee_Id(worker->getEmployee_Id());
    emp->setEmployee_Name(worker->getEmployee_Name());
    emp->setEmployee_DOB(worker->getEmployee_DOB());
    emp->setEmployee_Email(worker->getEmployee_Email());
    emp->setEmployee_Psw(worker->getEmployee_Psw());

    EmployeeMap.insert(emp->getEmployee_Id(),emp);

    data.InsertEmployeeData(worker);
}
Q_INVOKABLE void Company::print()

{   //**********QMap**********
    for(itr=EmployeeMap.begin();itr!=EmployeeMap.end();++itr)
    {
        qDebug()<<EmployeeMap.size();
        qDebug()<<"Employee Id="<< itr.value()->getEmployee_Id();
        qDebug()<<"EMployee Name="<< itr.value()->getEmployee_Name();
        qDebug()<<"Employee DOb="<< itr.value()->getEmployee_DOB();
        qDebug()<<"Employee Email="<<itr.value()->getEmployee_Email();
        qDebug()<<"Employee Psw="<< itr.value()->getEmployee_Psw()<<endl<<endl;

    }
}
Q_INVOKABLE QList<Employee*>Company::retriveDataFromDB()
{
//    qDebug()<<Q_FUNC_INFO<<"start"<<endl;
    retemp=data.RetriveEmployeeData();
//    qDebug()<<Q_FUNC_INFO<<"ends: ";

    /*for(int i =0 ;i<retemp.size();i++)
    {
        qDebug()<<EmployeeMap.size();
        qDebug()<<"Employee Id="<< retemp.at(i)->getEmployee_Id();
    }*/
    return retemp;
}
void Company::taskPage(Task *tasking)
{
  task=new Task;
  task->setTask_Id(tasking->getTask_Id());
  task->setTask_Name(tasking->getTask_Name());
  task->setTask_Desc(tasking->getTask_Desc());

  TaskMap.insert(task->getTask_Id(),task);

    data.InsertTaskData(tasking);
}

 Q_INVOKABLE void Company::printTask()
{
    for(itr1=TaskMap.begin();itr1!=TaskMap.end();++itr1)
    {
        qDebug()<<"Task Id="<<itr1.value()->getTask_Id();
        qDebug()<<"Task Name="<<itr1.value()->getTask_Name();
        qDebug()<<"Task Desc="<<itr1.value()->getTask_Desc();
    }
}

Q_INVOKABLE QList<Task*> Company::retriveTaskFromDB()
{
      returntask=data.RetriveTaskData();

      qDebug()<<Q_FUNC_INFO<<returntask;

      return returntask;
}

