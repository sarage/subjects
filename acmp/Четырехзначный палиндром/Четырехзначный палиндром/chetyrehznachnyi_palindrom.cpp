#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string a, b="";
	int i;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	getline(xin, a);
	for (i = 3; i >= 0; i--)
	{
		b = b + a.at(i);
	}
	if (a == b)
		xout << "YES";
	else
		xout << "NO";
	xout.close();
	return 0;
}