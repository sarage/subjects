#include <iostream> 
#include <fstream>
using namespace std;
int main()
{
	long int a,b,c;
	ifstream myfile("input.txt");
	ofstream myfl("output.txt");
	myfile >> a>>b>>c;
	if ((a*b) == c)
		myfl << "YES";
	else
		myfl << "NO";
myfl.close();
return 0;
}