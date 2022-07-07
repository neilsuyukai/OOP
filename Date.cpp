#include <iostream>
#include "Date.h"
using namespace std;
Date::Date()
{
    month=0;
    day=0;
    year=0;
}
Date::Date(int newMonth,int newDay,int newYear)
{
    month=newMonth;
    day=newDay;
    year=newYear;
}
void Date::setMonth(int newMonth)
{
    month=newMonth;
}
void Date::setDay(int newDay)
{
     day=newDay;
}
void Date::setYear(int newYear)
{
    year=newYear;
}
int Date::getMonth()const
{
    return month;
}
int Date::getDay()const
{
    return day;
}
int Date::getYear()const
{
    return year;
}
void Date::print()
{
    cout<<month<<"/"<<day<<"/"<<year;
}