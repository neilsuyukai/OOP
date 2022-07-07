#include "stucard1.h"
#include <iostream>
#include <iomanip>
using namespace std;

void StuCard::setName(string n)
{
    name=n;
}
void StuCard::setSex(bool s)
{
    sex=s;
}
void StuCard::setScore(int n,double s)
{
    scoreAry[n]=s;
}
void StuCard::setDate(Date d)
{
    birthday=d;
}
string StuCard::getName()const
{
    return name;
}
bool StuCard::getSex()const
{
    return sex;
}
double StuCard::getScore(int s)const
{
    return scoreAry[s];
}
Date StuCard::getDate()const
{
    return birthday;
}
double StuCard::average()
{
    return (scoreAry[0]+scoreAry[1]+scoreAry[2])/3;
}
int StuCard::getAge(int y)
{
    return y-birthday.getYear();
}
void StuCard::printCard()
{
    cout<<fixed<<setprecision(1)<<name<<", "<<sex<<", "<<scoreAry[0]<<", "<<scoreAry[1]<<", "<<scoreAry[2]<<", "<<birthday.getMonth()<<"/"<<birthday.getDay()<<"/"<<birthday.getYear()<<","<<this->average()<<", "<<this->getAge(2020)<<endl;
}
StuCard::StuCard(string n,bool s, double s1,double s2,double s3,int m,int d,int y)
{
    name=n;
    sex=s;
    scoreAry[0]=s1;
    scoreAry[1]=s2;
    scoreAry[2]=s3;
    Date da(m,d,y);
    birthday=da;
}