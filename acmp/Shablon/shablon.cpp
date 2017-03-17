#include <iostream>
#include <fstream>
using namespace std;
int main()
{   int a,b;
    ifstream xin("input.txt");
    ofstream xout("output.txt");
    xin>>a>>b;
    xout<<(a+b);
    xin.close();
    xout.close();
    return 0;
}