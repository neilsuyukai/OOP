#include "Teacher.h"
#include <string>
using namespace std;
Teacher:: Teacher()
{
    name=" ";
    age=1;
    score=0;
}
Teacher::Teacher(string newName,int newAge,double newScore)
{
    name=newName;
    age=newAge;
    score=newScore;
}
void Teacher::setName(string newName)
{
    name=newName;
}
void Teacher::setAge(int newAge)
{
    age=newAge;
}
void Teacher::setScore(double newScore)
{
    score=newScore;
}
string Teacher::getName()const
{
    return name;
}
int Teacher::getAge()const
{
    return age;
}
double Teacher::getScore()const
{
    return score;
}