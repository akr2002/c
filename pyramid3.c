#include <stdio.h>

int main()
{
	int ch = 65, i = 0, j = 0;

	for (i = 0; i < 5; ++i, ++ch)
	{
		for (j = 0; j <= i; ++j)
		{
			printf("%c", ch);
		}

		printf("\n");
	}

	return 0;
}
