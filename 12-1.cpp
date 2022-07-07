#include <iostream>
using namespace std;

template <typename T>
void InsertionSort(T list[], int listSize)
{
    for (int i = 1; i < listSize; i++)
    {
        T currentElement = list[i];
        int k;
        for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
        {
            list[k + 1] = list[k];
        }
        list[k + 1] = currentElement;
    }
}
template <typename T>
int BinarySearch(const T list[], T key, int listSize)
{
    int low = 0;
    int high = listSize - 1;

    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key == list[mid])
            return mid;
        else
            low = mid + 1;
    }

    return -1;
}

int main()
{
    int a1,b1,c1;
    double a2,b2,c2;
    int list1[]={1,5,6,2,3,7,9,8,4};
    double list2[]={1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4};
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    cout<<"From:"<<list1[0];
    for(int i=1;i<9;i++)
    {
        cout<<","<<list1[i];
    }
    cout<<endl;
    InsertionSort(list1,9);
    cout<<"To:"<<list1[0];
    for(int i=1;i<9;i++)
    {
        cout<<","<<list1[i];
    }
    cout<<endl;
    cout<<a1<<" "<<"at"<<" "<<BinarySearch(list1,a1,9)<<endl;
    cout<<b1<<" "<<"at"<<" "<<BinarySearch(list1,b1,9)<<endl;
    cout<<c1<<" "<<"at"<<" "<<BinarySearch(list1,c1,9)<<endl;
    cout<<"From:"<<list2[0];
    for(int i=1;i<9;i++)
    {
        cout<<","<<list2[i];
    }
    cout<<endl;
    InsertionSort(list2,9);
    cout<<"To:"<<list2[0];
    for(int i=1;i<9;i++)
    {
        cout<<","<<list2[i];
    }
    cout<<endl;
    cout<<a2<<" "<<"at"<<" "<<BinarySearch(list2,a2,9)<<endl;
    cout<<b2<<" "<<"at"<<" "<<BinarySearch(list2,b2,9)<<endl;
    cout<<c2<<" "<<"at"<<" "<<BinarySearch(list2,c2,9)<<endl;
    return 0;
}