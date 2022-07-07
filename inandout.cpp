#include <iostream>
using namespace std;

int *reverse(int list[],int size)
{
    int newList[5]={};
    cout<<"From:"<<list[0];
    for(int j=1;j<size;j++)
    {
        cout<<","<<list[j];
    }
    cout<<endl;

    for(int i=1;i<size;i++)
    {
        newList[i]=list[size-1-i];
    }

    cout<<"*reverse:"<<newList[0];
    for(int j=1;j<size;j++)
    {
        cout<<","<<newList[j];
    }
    cout<<endl;
    return newList;
}
int main()
{
    int x;
    int list[5]={};
    for(int i=0;i<5;i++)
    {
        cin>>x;
        list[i]=x;
    }
    reverse(list,5);
}