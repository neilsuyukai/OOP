#ifndef StuCard_H
#define StuCard_H

#include "da.h"
#include <iostream>
using namespace std;

class StuCard
{
    private:
    string name;
    bool sex;
    double scoreAry[3];
    Date birthday;
    
    public:
    
    StuCard(string,bool,double,double,double,int,int,int);
    void setName(string);
    void setSex(bool);
    void setScore(int,double);
    void setDate(Date);
    string getName()const;
    bool getSex()const;
    double getScore(int)const;
    Date getDate()const;
    double average();
    int getAge(int);
    void printCard();
};
#endif