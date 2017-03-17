#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
	int i, c = 0, a,s=0, arr[100][100], num, j,r=0;
	vector <int> vec;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	while (!xin.eof())
	{
		c++;
		if (c == 1)
			xin >> a;
		else
		{
			xin>> num;
			vec.push_back(num);
		}
	}
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			arr[i][j] = vec[r];
			r++;
		}
	}
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			if (arr[i][j] == 1)
			{
				if (arr[j][i] == 1)
					arr[j][i] = 0;
				s++;
			}
		}
	}
	xout << s;
	return 0;
}