#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
	int i, c = 0, m,n, s = 0, arr[100][100], num, j, r = 0;
	vector <int> vec;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	while (!xin.eof())
	{
		c++;
		if (c == 1)
			xin >> n>>m;
		else
		{
			xin >> num;
			vec.push_back(num);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < 2; j++)
		{
			arr[i][j] = vec[r];
			r++;
		}
	}
	vec.clear();
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if ((arr[j][0] == i + 1) || (arr[j][1] == i + 1))
				s++;
		}
		vec.push_back(s);
		s = 0;
	}
	for (i = 0; i < n; i++)
		xout << vec[i];
	return 0;
}