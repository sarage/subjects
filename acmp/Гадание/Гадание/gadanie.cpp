#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int a, i,s = 0;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	xin >> a;
	for (i = 1; i <=a; i++)
	{
		if (a%i ==0)
			s = s + i;
	}
		xout << s;
	xout.close();
	return 0;
}