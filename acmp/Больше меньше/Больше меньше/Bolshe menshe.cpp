#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	long int a, b;
	ifstream myfile1("input.txt");
	ofstream myfile("output.txt");
	myfile1 >> a >> b;
	if (a > b)
		myfile << ">";
	else if (a < b)
		myfile << "<";
	else if (a == b)
		myfile << "=";
	myfile.close();
	return 0;
}