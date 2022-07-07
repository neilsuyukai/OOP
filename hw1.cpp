#include <iostream>
#include <iomanip>
#include "da.h"
#include "stucard1.h"
using namespace std;

static double s[3];
double* classAver(StuCard st[], int);

int main()
{
    StuCard stu1("Jerry", 1, 80.0, 70.0, 90.0, 3, 20, 1997);
    StuCard stu2("John" , 1, 85.0, 77.0, 95.0, 5, 20, 1995);
    StuCard stu3("Mary" , 0, 83.0, 75.0, 70.0, 2, 18, 2007);
    StuCard stu4("Tom"  , 1, 73.0, 95.0, 67.0, 11, 8, 2003);
    string n;
    bool se;
    double sc[3];
    int m,d,y;
    cin>>n>>se>>sc[0]>>sc[1]>>sc[2]>>m>>d>>y;
    StuCard stu5(n, se, sc[0], sc[1], sc[2], m, d, y);
    StuCard st[5]={stu1, stu2, stu3, stu4, stu5};
    stu1.printCard();
    stu2.printCard();
    stu3.printCard();
    stu4.printCard();
    stu5.printCard();
    classAver(st,5);
    
    cout<<"Average: "<<s[0]<<", "<<s[1]<<", "<<s[2]<<endl;
}
double* classAver(StuCard st[], int t)
{
    s[0]=(st[0].getScore(0)+st[1].getScore(0)+st[2].getScore(0)+st[3].getScore(0)+st[4].getScore(0))/5;
    s[1]=(st[0].getScore(1)+st[1].getScore(1)+st[2].getScore(1)+st[3].getScore(1)+st[4].getScore(1))/5;
    s[2]=(st[0].getScore(2)+st[1].getScore(2)+st[2].getScore(2)+st[3].getScore(2)+st[4].getScore(2))/5;
    return s;
}