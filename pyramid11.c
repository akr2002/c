#include <stdio.h>

int main()
{
	int i = 0, j = 0, k = 0, l = 0;

	for (i = 0; i < 5; ++i)
	{
		for (j = 4; j > i; --j)
		{
			printf(" ");
		}
		if (!i) printf(" ");
		printf("*");

		for (k = 1; i > 0 && k <= i*2; ++k)
		{
			printf(" ");
		}
		if (i > 0) printf("*");
		
		printf("\n");
	}

	for (i = 5; i > 0; --i)
	{
		for (j = 5; j >= i; --j)
		{
			printf(" ");
		}
		printf("*");

		for (k = i; k <= i*2; ++k)
		{
			printf(" ");
		}
		printf("*");

		printf("\n");
	}

	return 0;
}
