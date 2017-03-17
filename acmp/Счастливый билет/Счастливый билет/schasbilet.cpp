#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	string a, c, c1;
	int i, k1, s1 = 0, k, s = 0;
	ifstream yin("input.txt");
	ofstream yout("output.txt");
	getline(yin, a);
	for (i = 0; i <6; i++)
	{
		if (i < 3)
		{
			c.assign(a, i, 1);
			k = atoi(c.c_str());
			s = s + k;
		}
		else
		{
			c1.assign(a, i, 1);
			k1 = atoi(c1.c_str());
			s1 = s1 + k1;
		}
	}
	if (s == s1)
		yout << "YES";
	else
		yout << "NO";
	yout.close();
	return 0;
}