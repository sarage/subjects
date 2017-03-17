#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    int n,i,len;
    vector <string> vec;
    string word,p1,p2;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>word;
        vec.push_back(word);
    }
    for (i=0;i<n;i++)
    {
        len=vec[i].size();
        if (len<11)
        {
            cout<<vec[i]<<endl;
            continue;
        }
        else
        {
            p1.assign(vec[i],0,1);
            p2.assign(vec[i],len-1,1);
            cout<<p1<<(len-2)<<p2<<endl;
        }
    }
    return 0;
}