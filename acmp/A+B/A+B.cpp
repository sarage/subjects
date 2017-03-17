#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	long int a, b, c;
	ifstream myfile1("input.txt");
	ofstream myfile("output.txt");
	myfile1 >> a >> b;
	c = a + b;
	myfile << c;
	myfile.close();
	return 0;
}