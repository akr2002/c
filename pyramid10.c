#include <stdio.h>

int main()
{
	int i = 0, j = 0, k = 0, l = 0;

	for (i = 0; i < 9; ++i)
	{
		for (j = 0; j < i+1 && i < 5; ++j)
		{
			printf("*");
		}

		for (j = 9; i > 4 && j > i; --j)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
