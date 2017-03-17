#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
	int a,i=0,b;
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
	int y = 0;
	for (i = 0; i < vec.size(); i++)
	{
		if (vec[i] <= 437)
		{
			xout << "Crash " << i + 1;
			y = 1;
			i = vec.size();
		}
	}
	if (y == 0)
		xout << "No crash";
	xout.close();
	return 0;
}