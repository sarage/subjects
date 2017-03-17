#include <iostream> 
#include <fstream>
using namespace std;
int main()
{
	long int a;
	ifstream myfile("input.txt");
	ofstream myfl("output.txt");
	myfile >> a;
	myfl << a << 9 << 9 - a;
	myfl.close();
	return 0;
}
