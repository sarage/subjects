#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	int a;
	string s="";
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	xin >> a;
	if (a < 10)
		s = "000";
	else if (a < 100)
		s = "00";
	else if (a < 1000)
		s = "0";
	if ((a % 4 == 0) && (a%100!=0)||(a%400==0))
		xout << "12/09/"<<s<<a;
	else
	xout << "13/09/"<<s<<a;
	xout.close();
	return 0;
}