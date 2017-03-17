#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main()
{
	int x1, y1, x2, y2;
	double d;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	xin >> x1 >> y1 >> x2 >> y2;
	d = (sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)));
	xout <<fixed<< d;
	xout.close();
	return 0;
}