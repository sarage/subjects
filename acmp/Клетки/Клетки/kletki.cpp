#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	string n, b, d;
	int c;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	xin >> n;
	d=n.at(0);
	b.assign(n, 1, 1);
	c = atoi(b.c_str());
	if ((d == "A") || (d == "C") || (d == "E") || (d == "G"))
	{
		if (c%2==0)
			xout << "WHITE";
		else 
			xout << "BLACK";
	}
	else if ((d == "B") || (d == "D") || (d == "F") || (d == "H"))
	{
		if (c % 2 == 0)
			xout << "BLACK";
		else
			xout << "WHITE";
	}
	xin.close();
	xout.close();
	return 0;
}