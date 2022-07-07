#include <iostream>
#include <string>
#include "9-6.h"
using namespace std;

int main()
{
	int x;
	string a;
	Score score1;
	Score score2;
	score1.setName("John");
	score1.setMath(90);
	score2.setName("Mary");
	score2.setMath(80);
	
	cin>>a>>x;
	
	score1.setName(a);
	score2.setMath(x);
	
	score1.print();
	score2.print();
	return 0;
}