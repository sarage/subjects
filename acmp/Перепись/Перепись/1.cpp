#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
	int i = 0, n,v, arr[10][10];
	vector <int> vec;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	while (!xin.eof())
	{
		i++;
		if (i == 1)
		{
			xin >> n;
		}
		if (i != 1)
		{
			xin >> v;
			vec.push_back(v);
		}
	}
	int y=0,r=0,k,max;
	for (i=0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			arr[i][j] = vec[r];
			r++;
		}
	}
	for (i=0; i < n; i++)
	{
		if (arr[i][1] == 1)
		{
			max = arr[i][0];
			k = i + 1;
			y = 1;
			i = n;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i][1] == 1)
		{
			if (arr[i][0] > max)
			{
				max = arr[i][0];
				k = i + 1;
				y = 1;
			}
		}
	}
	if (y == 1)
		xout << k;
	else if (y == 0)
		xout << -1;
	xout.close();
	return 0;
}