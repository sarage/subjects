#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main()
{
	int l, w, h;
	double k;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	xin >> l >> w >> h;
	k = 2 * (h*w + h*l);
	xout << ceil(k / 16);
	xout.close();
	return 0;
}