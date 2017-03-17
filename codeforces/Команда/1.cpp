#include <iostream>
using namespace std;

int main()
{
    int n,i,v,p,t,s=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>p>>v>>t;
        if ((p==1) && (v==1))
            s++;
        else if ((v==1) && (t==1))
            s++;
        else if ((p==1) && (t==1))
            s++;
    }
    cout<<s<<endl;
    return 0;
}