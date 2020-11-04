#include <stdio.h>

int main()
{
	int i = 0, j = 0, c = 65;

	for (i = 0; i < 5; ++i)
	{
		for (j = 0, c = 65; j <= i; ++j, ++c)
		{
			if (!(i%2))
			{
				printf("%d", j+1);
			}
			else printf("%c", c);
		}

		printf("\n");
	}

	return 0;
}
