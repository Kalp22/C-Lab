#include <iostream>

using namespace std;

int main()
{
	int t, n, i, j, key;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int A[n];
		for (i = 0; i < n; i++)
		{
			cin >> A[i];
		}
		for (i = 0; i < n; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (A[i] == A[j])
					key = A[i];
			}
		}
	}
	return 0;
}
