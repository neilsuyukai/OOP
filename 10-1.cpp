#include <iostream>
#include <sstream>
#include <string>
using namespace std;
void printStringArray(string word[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<word[i]<<endl;
    }
}
int main()
{
    string text("Programming is fun");
    getline(cin,text);
    stringstream ss(text);
    const int size=10;
    int i=0;
    string word[size];

    while(!ss.eof())
    {
        ss>>word[i];
        i++;
    }
    printStringArray(word,size);
    cout<<"Length:"<<text.length();

    return 0;
}