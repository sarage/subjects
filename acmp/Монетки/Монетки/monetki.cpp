#include <iostream> 
#include <fstream>
using namespace std;
int main()
{
	long int n,sum1 = 0,sum0=0,a;
	ifstream myfile("input.txt");
	ofstream myfl("output.txt");
	myfile >> n;
	for (int i = 0; i < n; i++)
	{
		myfile >> a;
		if (a==1)
		sum1 ++;
		else if (a==0)
		sum0++;
	}
	if (sum1>sum0)
		myfl << sum0;
	else 
		myfl << sum1;
	myfl.close();
	return 0;
}