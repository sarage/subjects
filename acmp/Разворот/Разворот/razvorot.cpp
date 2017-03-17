#include <iostream> 
#include <fstream>
#include <vector>
using namespace std;
int main()
{
	int s, i,a;
	vector <int> vec;
	ifstream myfile("input.txt");
	ofstream myfl("output.txt");
	myfile >> s;
	for (i = 0; i < s; i++)
	{
		myfile >> a;
		vec.push_back(a);
	}
	for (i = s-1; i >= 0; i--)
	{
		myfl << vec.at(i)<<" ";
	}
	myfl.close();
	return 0;
}