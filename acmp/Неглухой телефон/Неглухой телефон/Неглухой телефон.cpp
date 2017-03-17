#include <iostream>
#include <fstream>
using namespace std;
int main()
{   int a,b;
    ifstream xin("input.txt");
    ofstream xout("output.txt");
    xin>>a;
    xout<<a;
    xin.close();
    xout.close();
    return 0;
}