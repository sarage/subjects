#include <iostream>
using namespace std;
int main()
{
	int n, i, j, k, wi, hi;
	cin >> n;
	int mas[10], mas1[10];
	for (i = 0; i<n; i++)
	{
		cin >> wi >> hi;
		mas[i] = wi;
		mas1[i] = hi;
	}
	for (i = n - 2; i >= 0; i--)
	{
		for (int y = n - 2; y >= i; y--)
		{
			j = mas[i] + mas[y + 1];
			if (mas1[i]>mas1[y + 1])
				k = mas1[i];
			else
				k = mas1[y + 1];
			cout << j*k;
			if (i == -1)
				break;
			else
				cout << " ";
		}
	}
	system("pause");
	return 0;
}