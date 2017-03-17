#include <iostream> 
#include <fstream>
using namespace std;
int main()
{
	long int s,x;
	ifstream myfile("input.txt");
	ofstream myfl("output.txt");
	myfile >> s;
	x = s / 6;
	myfl << x << " " << x * 4<<" "<<x;
	myfl.close();
	return 0;
}