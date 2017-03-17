#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
	int t=0,a, b,c,i;
	vector <int> vec;
	vector <int> vec1;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	for (i = 0; i < 6; i++)
	{
		xin >> a;
		if (i < 3)
			vec.push_back(a);
		else
			vec1.push_back(a);
	}
	for (i = 0; i < 2; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (vec.at(i)>vec.at(j))
			{
				b = vec.at(i);
				vec.at(i) = vec.at(j);
				vec.at(j) = b;
			}
			if (vec1.at(i) > vec1.at(j))
			{
				c = vec1.at(i);
				vec1.at(i) = vec1.at(j);
				vec1.at(j) = c;
			}
		}
	}
		for (i = 0; i < 3; i++)
		{
			t = t + (vec.at(i)*vec1.at(i));
		}
	xout << t;
	xin.close();
	xout.close();
	return 0;
}