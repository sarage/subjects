#include <iostream>
using namespace std;

int main()
{
    int n,i,m,s=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>m;
        s=s+m;
    }
    if (s%4==0)
        cout<<(s/4)<<endl;
    else if (s%4!=0)
        cout<<(s/4+1)<<endl;
    return 0;
}