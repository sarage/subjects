#include <iostream>
using namespace std;
int main()
{
    int a,b,c=1;
    cin>>a;
    for (int i=2;i<a-1;i=i+2)
    {
        b=a-i;
        if ((b%2)==0)
        {
            cout<<"YES"<<endl;
            c=0;
            break;
        }
    }
    if (c!=0)
        cout<<"NO"<<endl;
    return 0;
}