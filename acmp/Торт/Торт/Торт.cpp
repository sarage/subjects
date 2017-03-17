#include <iostream> 
#include <fstream>
using namespace std;
int main()
{
	int a,b;
	ifstream myfile("input.txt");
	ofstream myfl("output.txt");
		myfile >> a;
		if ((a % 2) == 0)
		{
			b = a / 2;
			myfl << b;
		}
		else if ((a == 1) && (a%2!=0))
			myfl << 0;
		else if ((a!=1)&&(a%2!=0))
			myfl << a;
	myfl.close();
	return 0;
}