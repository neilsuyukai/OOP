#include <iostream>
#include <iomanip>
#include <string>
#include "Round1.h"
#include "Pentagon1.h"
#include "Shape11.h"
using namespace std;
void display(Shape11 & g)
{
    cout<<fixed<<setprecision(2)<<",Perimeter:"<<g.getPerimeter()<<",Color:"<<g.getColor()<<endl;
}
int main()
{
    double a,aa;
    string s,ss;
    cin>>a>>s>>aa>>ss;
    Round1 r1;
    r1.setRadius(a);
    r1.setColor(s);
    cout<<"Round"<<endl;
    cout<<fixed<<setprecision(2)<<"Radius:"<<r1.getRadius();
    display(r1);
    
    Pentagon1 p1;
    p1.setEdge(aa);
    p1.setColor(ss);
    cout<<"Pentagon"<<endl;
    cout<<fixed<<setprecision(2)<<"Edge:"<<p1.getEdge();
    display(p1);
    return 0;
}