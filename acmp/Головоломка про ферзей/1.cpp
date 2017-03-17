#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main()
{   int a,b=0,c=0,j=2;
    ifstream xin("input.txt");
    ofstream xout("output.txt");
    xin>>a;
    if (a==1)
        xout<<0;
    else
    {
    while (j!=a)
    {
        j++;
        b=b+2;
        c=c+b;
    }
    xout<<c;
}
    xin.close();
    xout.close();
    return 0;
}