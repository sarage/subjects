#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string d1="VGC", d2="CVG", d3="GCV";
	int a,i, k1, s1 = 0, k, s = 0;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	xin>>a;
	if (a % 3 == 1)
		xout << d1;
	else if (a % 3 == 2)
		xout << d2;
	else if (a % 3 == 0)
		xout << d3;
	xout.close();
	return 0;
}