#ifndef Student_H
#define Student_H
#include<iostream>
#include <string>
#include"Date.h"
using namespace std;
class Student
{
    private:
    string name;
    Date birthDay;
    int score;
    
    public:
    Student();
    Student(string,Date,int);
    void setName(string);
    void setDate(Date);
    void setScore(int);
    string getName()const;
    Date getDate()const;
    int getScore()const;
    void print();
};
#endif