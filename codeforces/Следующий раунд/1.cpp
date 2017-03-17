#include <iostream>
#include <vector>
 
using namespace std;
int main()
{
    int a,b,c,i,s=0;
    vector <int> vec;
    cin>>a>>b;
    b=b-1;
    for (i=0;i<a;i++)
    {
        cin>>c;
        vec.push_back(c);
    }
    
    for (i=0;i<a;i++)
    {
        
        if ((vec[i]>=vec[b]) && (vec[i]!=0))
            s++;
    }
    cout<<s<<endl;
    return 0;
}