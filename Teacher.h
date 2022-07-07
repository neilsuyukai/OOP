#ifndef Teacher_H
#define Teacher_H
#include <string>
using namespace std;
class Teacher
{
    private:
    string name;
    int age;
    double score;
    public:
    Teacher();
    Teacher(string,int,double);
    void setName(string);
    void setAge(int);
    void setScore(double);
    string getName()const;
    int getAge()const;
    double getScore()const;
};
#endif