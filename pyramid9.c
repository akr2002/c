#include <stdio.h>

int main()
{
	int i = 0, j = 0, k = 0, l = 1;

	for (i = 1; i <= 4; ++i, l += 2)
	{
		for (j = 4; j > i; --j)
		{
			printf(" ");
		}

		for (k = 1; k <= l; ++k)
		{
			printf("%d", i);
		}
		printf("\n");
	}

	return 0;
}
