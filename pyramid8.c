#include <stdio.h>

int main()
{
	int i = 0, j = 0, k = 0;

	for (i = 1; i <= 5; ++i)
	{
		for (j = 1; j < i; ++j)
		{
			printf(" ");
		}

		for (k = 1; k <= 6 - i; ++k)
		{
			printf("%d", k);
		}

		printf("\n");
	}

	return 0;
}
