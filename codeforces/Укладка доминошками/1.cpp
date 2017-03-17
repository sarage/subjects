#include <iostream>
using namespace std;

int main()
{
    int m,n,i=0,v;
    cin>>m>>n;
    v=m*n;
    while(v>=2)
    {
        v=v-2;
        i++;
    }
    cout<<i;
    return 0;
}