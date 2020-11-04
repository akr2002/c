#include <stdio.h>

int main()
{
	int i = 0, j = 0;

	for (int i = 0; i < 5; ++i)
	{
		for (j = 5 - i; j > 0; --j)
		{
			printf("%d", j);
		}
		printf("\n");
	}

	return 0;
}
