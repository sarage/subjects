#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	long int n, a, b;
	ifstream myfile1("input.txt");
	ofstream myfile("output.txt");
	myfile1 >> n >> a >> b;
	myfile << a*b * 2 * n;
	myfile.close();
	return 0;
}