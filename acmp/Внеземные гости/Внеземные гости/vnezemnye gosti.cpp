#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int r1,r2,r3;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	xin >> r1>> r2>>r3;
	if ((2 * r1) >= ((2 * r2) + (2 * r3)))
		xout << "YES";
	else
		xout << "NO";
	xin.close();
	xout.close();
	return 0;
}