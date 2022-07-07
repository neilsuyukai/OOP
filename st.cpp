#include "st.h"
#include <string>
using namespace std;
Employee::Employee()
{
    name=" ";
    income=0;
    hours=0;
}
Employee::Employee(string newName,int newIncome,int newHours)
{
    name=newName;
    income=newIncome;
    hours=newHours;
}
void Employee::setName(string newName)
{
    name=newName;
}
void Employee::setIncome(int newIncome)
{
    income=newIncome;
}
void Employee::setHours(int newHours)
{
    hours=newHours;
}
string Employee::getName()const
{
    return name;
}
int Employee::getIncome()const
{
    return income;
}
int Employee::getHours()const
{
    return hours;
}
double Employee::getWage()const
{
    return income*1.0/hours*1.0;
}
void Employee::swapByReference(Employee &employee2)
{
    Employee temp=*this;
    *this=employee2;
    employee2=temp;
}
void Employee::swapByPointer(Employee *employee2)
{
    Employee temp=*this;
    *this=*employee2;
    *employee2=temp;
}