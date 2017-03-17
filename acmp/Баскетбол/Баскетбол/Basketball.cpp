#include <iostream> 
#include <fstream>
using namespace std;
int main()
{
	long int a, b,suma=0,sumb=0;
	ifstream myfile("input.txt");
	ofstream myfl("output.txt");
	for (int i = 0; i < 4; i++)
	{
		myfile >> a >> b;
		suma = suma + a;
		sumb = sumb + b;
	}
	if (suma>sumb)
		myfl << 1;
	else if (suma < sumb)
		myfl << 2;
	else if (suma == sumb)
		myfl << "DRAW";
	myfl.close();
	return 0;
}