#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,i,x=0;
    string a;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a;
        if ((a=="X++") || (a=="++X"))
            x++;
        else if ((a=="X--") || (a=="--X"))
            x--;
    }
    cout<<x<<endl;
    
    return 0;
}