#include <iostream>
#include <string>
using namespace std;
int main()
{
	char c;
	int n, i, j, k = 0, p, count = 0, len, ch;
	string sap, name[80];
	cin >> n;
	//name[80] = name[n];
	for (i = 0; i <= n; i++)
	{
		getline(cin, sap);
		p = sap.size();
		for (j = 0; j <p; j++)
		{
			c = sap.at(j);
			if (c == ' ')
				k = j;
		}
		sap.erase(0, k + 1);
		name[i] = sap;
	}
	for (i = 0; i <= n; i++)
	{
		len = 0;
		sap = "";
		sap = name[i];
		len = sap.size();
		for (j = 0; j<len; j++)
		{
			ch = int(sap[j]);
			if (ch<91)
			{
				ch += 32;
				sap[j] = char(ch);
			}
		}
		name[i] = sap;
        cout<<name[i]<<endl;
	}
	for (i = 0; i <= n; i++)
	{
		if (name[i] != name[i + 1])
		{
            //cout<<name[i]<<" "<<name[i+1];
			count++;
		}
	}
	cout << count << endl;
	//system("pause");
	return 0;
}