#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
	int a, i = 0, b;
	vector <int> vec;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	while (!xin.eof())
	{
		i++;
		if (i == 1)
		{
			xin >> a;
		}
		if (i != 1)
		{
			xin >> b;
			vec.push_back(b);
		}
	}
	int max=vec[0],min=vec[0];
	for (i = 0; i < vec.size(); i++)
	{
		if (vec[i] >= max)
			max = vec[i];
		if (vec[i] <=min)
			min = vec[i];
	}
	xout << min << " " << max;
	xout.close();
	return 0;
}