#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	long int i,a,b,d,p=0;
	ifstream xin ("input.txt");
	ofstream xout("output.txt");
	xin>>a>>b;
    if (a<=b)
        i=a;
    else
        i=b;
    while(p)
    {
        if ((a%i)==0 && (b%i==0))
        {
            d=i;
            p=1;}
        i--;
    }
    cout<<d;
	xout.close();
	return 0;
}