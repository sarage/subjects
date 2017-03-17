#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	int a;
	string b="2.7182818284590452353602875",c,d="7182818284590452353602875",str,str1;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	xin >> a;
	if (a == 0)
		xout << 3;
	else if (a == 25)
		xout << b;
	else
	{
		str = d.at(a);
		str1 = d.at(a-1);
			int s = atoi(str.c_str());
			int s1 = atoi(str1.c_str());
		if (s>=5)
			xout << c.assign(b, 0, 2+a-1)<<s1+1;
		else
			xout << c.assign(b, 0, 2 + a);
	}
	xout.close();
	return 0;
}