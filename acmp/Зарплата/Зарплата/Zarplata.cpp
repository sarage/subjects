#include <iostream> 
#include <fstream>
using namespace std;
int main()
{
	long int a, b, c, max=0, min=0, dif;
	ifstream myfile("input.txt");
	ofstream myfl("output.txt");
	myfile >> a >> b >> c;
	if ((a > b) && (a > c))
		max = a;
	else if ((b > a) && (b > c))
		max = b;
	else if ((c > b) && (c > a))
		max = c;
	if ((a < b) && (a < c))
		min = a;
	else if ((b < a) && (b < c))
		min = b;
	else if ((c < b) && (c < a))
		min = c;
	dif = max - min;
	myfl << dif;
	myfl.close();
	return 0;
}