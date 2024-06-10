#include <stdio.h>

int main(void)
{
	int t, n, i, j, key;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		int A[n];
		for (i = 0; i < n; i++)
			scanf("%d", &A[i]);
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
