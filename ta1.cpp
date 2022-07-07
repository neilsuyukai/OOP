#include <iostream>
using namespace std;
template <typename T>
void sortArray(T arr[],int arrSize)
{
    T arr[max];
	int n,i,j;
	int temp;
	
	cin>>n;
	if(n<0)
	{
		return -1;
	}
	
	for(i=0;i<arrSize;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<arrSize;i++)
	cout<<arr[i]<<"";
	cout<<endl;
	for(i=0;i<arrSize;i++)
	{		
		for(j=i+1;j<arrSize;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<arrSize;i++)
	cout<<arr[i]<<" ";
	cout<<endl;	
	return 0;
}
int main()
{
    return 0;
}