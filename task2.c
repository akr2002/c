#include <stdio.h>

int main()
{
	int n = 1;
	int i = 0, j = 0;
	for (i = 1; i <= 4; ++i)
	{
		for (j = 0; j < i; ++j)
		{
			printf("%d ", n++);
		}
		printf("\n");
	}

	return 0;
}
