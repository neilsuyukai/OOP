#include <iostream>
#include <iomanip>
#include <string>
#include "st.h"

using namespace std;
int main()
{
    string n1,n2;
    int ic1,ic2;
    int h1,h2;
    cin>>n1>>ic1>>h1;
    cin>>n2>>ic2>>h2;
    Employee x1;
    x1.setName(n1);
    x1.setIncome(ic1);
    x1.setHours(h1);
    Employee x2;
    x2.setName(n2);
    x2.setIncome(ic2);
    x2.setHours(h2);
    
    
    cout<<"SwapByReference:"<<fixed<<setprecision(2)<<x1.getName()<<"-"<<x1.getWage()<<
    "\n "<<x2.getName()<<"-"<<x2.getWage()<<" to ";
    x1.swapByReference(x2);
    cout<<fixed<<setprecision(2)<<x1.getName()<<"-"<<x1.getWage()<<"\n"<<x2.getName()<<"-"<<x2.getWage()<<endl;

    cout<<"SwapByPointer:"<<fixed<<setprecision(2)<<x1.getName()<<"-"<<x1.getWage()<<
    "\n "<<x1.getName()<<x1.getWage()<<" to ";
    x1.swapByPointer(&x2);
    cout<<fixed<<setprecision(2)<<x1.getName()<<"-"<<x1.getWage()<<"\n"<<x2.getName()<<"-"<<x2.getWage()<<endl;
    return 0;
}