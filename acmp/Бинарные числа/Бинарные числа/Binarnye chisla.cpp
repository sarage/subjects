#include <iostream> 
#include <fstream>
#include <math.h>
using namespace std;
int main()
{
    int s, x=0,i=-2;
	ifstream myfile("input.txt");
	ofstream myfl("output.txt");
	myfile >> s;
	while (x<s)
	{
		x = pow(2,i);
		i++;
	}
	if ((x == s) && (s!=0))
		myfl << "YES";
	else if ((x != s) || (s == 0))
		myfl << "NO";
	myfl.close();
	return 0;
}