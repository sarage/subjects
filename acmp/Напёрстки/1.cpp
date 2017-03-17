#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	int i;
    string a,c,d1="1",d2="2",d3="3",d4;
	ifstream xin ("input.txt");
	ofstream xout("output.txt");
	xin>>a;
    int len=a.size();
    for (i=0;i<len;i++)
    {
        c.assign(a,i,1);
        if (c=="A")
        {
            d4=d1;d1=d2;d2=d4;
        }
        else if (c=="B")
            {
            d4=d2;d2=d3;d3=d4;
        }
        else if (c=="C")
            {
            d4=d1;d1=d3;d3=d4;
        }
    }
    xout<<d1;
	xout.close();
	return 0;
}