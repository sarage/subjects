#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	long int a, b;
	ifstream myfile1("input.txt");
	ofstream myfile("output.txt");
	myfile1 >>  a >> b;
	myfile << b-1<<" "<<a-1;
	myfile.close();
	return 0;
}