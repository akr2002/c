#include <stdio.h>

int main()
{
	int i = 0, j = 0;

	for (int i = 0; i < 5; ++i)
	{
		for (j = 0; j <=i; ++j)
		{
			printf("%d", j + 1);
		}
		printf("\n");
	}

	return 0;
}
