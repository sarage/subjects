#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	long int a, b, c, d;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	xin >> a;
	b = a / 10;
	c = b*(b + 1);
	if (c == 0)
	xout << ""<<25;
	else
		xout <<c<< 25;
	xout.close();
	return 0;
}