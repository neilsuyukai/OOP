#include <iostream>
#include <string>
#include "Date.h"
#include "Student.h"
using namespace std;

int main()
{
    Date birth1(6, 1, 1999);
    Date birth2(10, 8, 1997);
    Student student1("John", birth1, 90);
    Student student2("Marry", birth2, 80);
    
    string name;
    int month,day,year;
    cin>>name>>month>>day>>year;
    student1.setName(name);
    student2.setDate(Date(month,day,year));
    student1.print();
    student2.print();
    return 0;
    
}