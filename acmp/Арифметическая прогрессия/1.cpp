#include <iostream>
#include <fstream>
using namespace std;
int main()
{   int a,b,n,d,m,i;
    ifstream xin("input.txt");
    ofstream xout("output.txt");
    xin>>a>>b>>n;
    m=a;
    d=b-a;
    for (i=0;i<n-1;i++)
       m=m+d; 
    xout<<m;
    xin.close();
    xout.close();
    return 0;
}