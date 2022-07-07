#include <iostream>
#include <iomanip>
#include <string>
#include "9-4.h"
using namespace std;
int main()
{
    string a;
    double b,c;
    cin>>a>>b>>c;
    BMI a1(b,c);
    cout<<fixed<<setprecision(2)<<a<<" "<<a1.getBMI()<<endl;
    return 0;
}