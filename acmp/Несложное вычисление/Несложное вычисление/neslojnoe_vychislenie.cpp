#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	long int n, k,b,c=1,d=0,e;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	xin >> n>> k;
	int a = k+1;
	while (a > k)
	{
		a = n / k;
		b = n%k;
		c = c*b;
		d = d + b;
		n = a;
	}
	e = (c*n) - (d + n);
	xout << e;
	xin.close();
	xout.close();
	return 0;
}