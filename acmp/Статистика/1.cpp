#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{   int n,a,i,j,k;
    vector <int> vec;
    vector <int> vec1;
    ifstream xin("input.txt");
    ofstream xout("output.txt");
    xin>>n;
    for (i=0;i<n;i++)
    {
        xin>>a;
        if (a%2==0)
            goto d;
        else
            goto s;
    }
    d: vec.push_back(a);
    s: vec1.push_back(a);
    for (j=0;j<vec.size();j++)
    xout<<vec[j]<<" ";
    for (k=0;k<vec1.size();k++)
    xout<<vec1[k]<<" ";
    xin.close();
    xout.close();
    return 0;
}