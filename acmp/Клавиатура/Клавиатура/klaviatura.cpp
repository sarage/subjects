#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	char a;
	string b = "qwertyuiopasdfghjklzxcvbnmq",str;
	ifstream xin("input.txt");
	ofstream xout("output.txt");
	xin >> a;
	if (a =='m')
		xout << "q";
	else
	{
		int pos = b.find(a);
		str.assign(b, pos+1, 1);
	}
	xout << str;
	xout.close();
	return 0;
}