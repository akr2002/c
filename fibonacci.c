#include <stdio.h>

int main()
{
	int n, t1 = 0, t2 = 1, nextTerm = 0, i;

	printf("Enter the number of terms: ");
	scanf("%d", &n);

	for (i = 1; i <= n; ++i)
	{
		if (i == 1)
		{
			printf("%d ", t1);
		}

		if (i == 2)
		{
			printf("%d ", t2);
		}

		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		printf("%d ", nextTerm);
	}

	return 0;
}
