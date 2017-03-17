#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	string n,d;
	int i,a=0;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	xin >> n;
	for (i = 0; i < n.size(); i++)
	{
		d = n.at(i);
		if ((d == "0") || (d == "6") || (d == "9"))
			a++;
		if (d == "8")
			a = a + 2;
	}
	xout << a;
	xin.close();
	xout.close();
	return 0;
}