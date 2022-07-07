#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Teacher.h"
using namespace std;
int main()
{ 
    ifstream input("Teacher.txt");
    string readFromFile;
    string n1;
    int a1;
    double s1;
    cin>>readFromFile>>n1>>a1>>s1;
    input>>readFromFile>>n1>>a1>>s1;
    cout<<fixed<<setprecision(2)<<readFromFile<<" "<<n1<<" "<<a1<<" "<<s1<<endl;
    
    string writeToFile;
    string n2;
    int a2;
    double s2;
    cin>>writeToFile>>n2>>a2>>s2;
    input>>writeToFile>>n2>>a2>>s2;
    cout<<fixed<<setprecision(2)<<writeToFile<<" "<<n2<<" "<<a2<<" "<<s2<<endl;
    string readFromFile1;
    string n3;
    int a3;
    double s3;
    cin>>readFromFile1>>n3>>a3>>s3;
    input>>readFromFile1>>n3>>a3>>s3;
    cout<<fixed<<setprecision(2)<<readFromFile1<<" "<<n3<<" "<<a3<<" "<<s3<<endl;
    
    string writeToFile2;
    string n4;
    int a4;
    double s4;
    cin>>writeToFile2>>n4>>a4>>s4;
    input>>writeToFile2>>n4>>a4>>s4;
    cout<<fixed<<setprecision(2)<<writeToFile2<<" "<<n4<<" "<<a4<<" "<<s4<<endl;
    
    input.close();
    
    return 0;
}