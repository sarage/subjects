#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	long int k, n, m, d;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	xin >> k;
	for (int i = 0; i < k; i++)
	{
		xin >> n >> m;
		d = 19 * m + (n + 239)*(n + 366) / 2;
		xout << d<<endl;
	}
	xout.close();
	return 0;
}