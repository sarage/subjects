#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
int main()
{
	long int i=0,k,s;
	string hour,min,sec,a;
	vector <int> vec;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	while (!xin.eof())
	{
		i++;
		if (i == 1)
		{
			xin >> s;
		}
		if (i != 1)
		{
			xin >>hour>>min>>sec;
			a = hour + min + sec;
			k = atoi(a.c_str());
			vec.push_back(k);
		}
	}
	for (i = 0; i < s; i++)
	{
		for (int j = i; j < s; j++)
		{
			if (vec[i] > vec[j])
			{
				int z = vec[i];
				vec[i] = vec[j];
				vec[j] = z;
			}
		}
	}
	for (i = 0; i < s; i++)
	{
		int y = vec[i] % 100;
		int y1 = vec[i] / 100;
		int y2 = y1 % 100;
		int y3 = y1 / 100;
		if (i!=(s-1))
		xout << y3 << " " <<  y2 << " " << y<<endl;
		else if (i==(s-1))
		xout << y3 << " " << y2 << " " << y;
	}
	xout.close();
	return 0;
}