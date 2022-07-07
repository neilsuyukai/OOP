#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double stuAve(vector<double>toy){
    double total=0;
    for(int i=0;i<toy.size();i++){
        total=total+toy[i];
    }
    return total/3;
}
double* courseAve(vector<vector<double> >ziv){
    double average=0;
    cout<<"Average:";
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            average=average+ziv[j][i];
        }
        cout<<average/5;
        if(i<2){
            cout<<",";
        }
        average=0;
    }
    return 0;
}
int main()
{
    vector<vector<double> >tom(5,vector<double>(3));
    double grade[5][3]{
        {80.0, 70.0, 90.0},
        {85.0, 77.0, 95.0},
        {83.0, 75.0, 70.0},
        {73.0, 95.0, 67.0},
        {88.0, 79.0, 71.0},
    };
    for(int i=0;i<tom.size();i++){
        for(int j=0;j<tom[i].size();j++){
            tom[i][j]=grade[i][j];
        }
    }
    for(int i=0;i<tom.size();i++){
        for(int j=0;j<tom[i].size();j++){
            cout<<fixed<<setprecision(1)<<tom[i][j]<<",";
        }
        cout<<fixed<<setprecision(1)<<stuAve(tom[i])<<endl;
    }
    courseAve(tom);
    return 0;
}