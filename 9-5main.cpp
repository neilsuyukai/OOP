#include <iostream>
#include <string>
#include "9-5.h"
using namespace std;
int main()
{
    double x,y;
    string a,b;
    Score score1,score2;
    score1.setName("John");
    score1.setMath(90);
    score2.setName("Mary");
    score2.setMath(80);
    cin>>a>>x;
    cin>>b>>y;

    score1.setName(a);
    score2.setMath(y);

    score1.print();
    score2.print();
    return 0;
}