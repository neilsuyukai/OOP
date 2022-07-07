#ifndef Employee_H
#define Employee_H
#include <string>
#include <iostream>
using namespace std;
class Employee
{
    private:
    string name;
    int income;
    int hours;
    
    public:
    Employee();
    Employee(string newName,int newIncome,int newHours);
    void setName(string newName);
    void setIncome(int newIncome);
    void setHours(int newHours);
    void swapByReference(Employee &employee2);
    void swapByPointer(Employee *employee2);
    string getName()const;
    int getIncome()const;
    int getHours()const;
    double getWage()const;
};
#endif