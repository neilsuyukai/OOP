#include <iostream>
using namespace std;
template <typename T>
void reverse(const T list[],T newList[],int size)
{
    for(int i=0;i<size;i++)
    {
        newList[i]=list[size-i-1];
    }
}
template <typename T>
void print(T list[],int size)
{
    T newList[10]={};
    cout<<"From:"<<list[0];
    for(int i=1;i<size;i++)
        cout<<","<<list[i];
    cout<<endl;
    
    reverse(list,newList,10);

    cout<<"To:"<<newList[0];
    for(int i=1;i<size;i++)
        cout<<","<<newList[i];
    cout<<endl;
}
int main()
{
    int x;
    double y;
    int list1[10]={};
    double list2[10]={};
    for(int i=0;i<10;i++)
    {
        cin>>x;
        list1[i]=x;
    }
    for(int i=0;i<10;i++)
    {
        cin>>y;
        list2[i]=y;
    }
    
    print(list1,10);
    print(list2,10);
}