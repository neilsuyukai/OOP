#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string str;
    cout<<"Please enter your name:\n";
    getline(cin,str);
    cout<<"Hello "<<str<<" welcome to c++!\n";
    return 0;
}