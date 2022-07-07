#include <iostream>
#include "12-2.h"
using namespace std;

int main()
{
    int sum;
    Stack<char> cs;
    int n;
    char w;
    cin>>n;
    cs.push(n);
    for(int i=0;i<4;i++)
    {
        cin>>w;
        cs.push(w);
        cin>>n;
        cs.push(n);
    }
    for(int j=0;j<4;j++)
    {
        int op1=cs.pop();
        char op=cs.pop();
        int op2=cs.pop();
        if(op=='+')
            sum=op2+op1;
        else if(op=='-')
            sum=op2-op1;
        else if(op=='*')
            sum=op2*op1;
        else if(op=='/')
            sum=op2/op1;
        cout<<sum<<endl;
        cs.push(sum);
    }
    return 0;
}