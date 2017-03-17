#include <iostream>
#include <fstream>
using namespace std;
int main()
{   int m,n,k,a,a1,s=0;
    ifstream xin("input.txt");
    ofstream xout("output.txt");
    xin>>n>>m>>k;
    a1=m-n;
    a=a1;
    while (a!=0)
    {
    a=m-n;
    if (a1<a)
    {
        xout<<"NO";
        goto d;
    }
    else
    {
    s++;
    a1=a;
    m=a+k;
    }
    }
    if (s==0)
        xout<<1;
    else 
        xout<<s;
    xin.close();
    xout.close();
    d: return 0;
}