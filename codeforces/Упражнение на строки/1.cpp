#include <iostream>
#include <locale>   
#include <string>
using namespace std;

int main()
{
    int len,i,j;
    locale loc;
    string str;
    cin>>str;
    len=str.size();
    for (i=0;i<len;i++)
    {
    for (j=0;j<len;j++)
    {
        if ((str[i]=='A') || (str[i]=='a') ||(str[i]=='O') ||(str[i]=='o') ||(str[i]=='Y') ||(str[i]=='y') ||(str[i]=='E') ||
            (str[i]=='e') ||(str[i]=='U') ||(str[i]=='u') ||(str[i]=='I') ||(str[i]=='i'))
        {
            
            str.erase(i,1);
        }
        str[i]=tolower(str[i],loc);
    }}
    len=str.size();
    for (i=0;i<len;i++)
    {
        cout<<'.'<<str[i];
    }
    return 0;
}