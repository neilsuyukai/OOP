#include <iostream>
#include <string>
#include"Student.h"
#include"Date.h"
using namespace std;
Student::Student()
{
    name="";
    birthDay=Date();
    score=0;
}
Student::Student(string newName,Date newBirthDay,int newScore)
{
    name= newName;
    birthDay=newBirthDay;
    score=newScore;
}
void Student::setName(string newName)
{
    name=newName;
}
void Student::setDate(Date newBirthDay)
{
    birthDay=newBirthDay;
}
void Student::setScore(int newScore)
{
    score=newScore;
}
string Student::getName()const
{
    return  name;
}
Date Student::getDate()const
{
    return  birthDay;
}
int Student::getScore()const
{
    return score;
}
void Student::print()
{
    cout<<name<<" ";
    birthDay.print();
    cout<<" "<<score<<endl;
}