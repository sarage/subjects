#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    int i,n,s=0;
    ifstream myfile1("input.txt");
    ofstream myfile("output.txt");
    myfile1>>n;
    if (n>0){
    for (i=1;i<=n;i++)
        s=s+i;}
    else{
        for (i=1;i>=n;i--)
        s=s+i;}
    myfile<<s;
    myfile.close();
    return 0;
}
