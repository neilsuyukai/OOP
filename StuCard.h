#ifndef StuCard_H
#define StuCard_H
#include <string>
using namespace std;
class StuCard
{
    private:
    string name;
    bool sex;
    double scoreAry[3];
    Date birthDay;
    
    public:
    StuCard();
    StuCard(string,bool,(int,double),Date);
    void setName(string);
    void setSex(bool);
    void setScore(int,double);
    void setDate(Date);
    int getName()const;
    bool getSex()const;
    double getScore(int)const;
    Date getDate()const;
    double average();
    int getAge(int);
    void printCard();
};
#endif