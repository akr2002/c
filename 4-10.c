#include <stdio.h>

int main()
{
	int rows = 0;
	int i = 0;
	int j = 0;

	while (rows < 1)
	{
		printf("Enter number of rows: ");
		scanf("%d", &rows);

		if (rows == 0)
		{
			printf("Exiting program.\n");
			return -1;
		}

		if (rows < 0)
		{
			printf("Invalid value.\n");
		}
	}

	for (i = rows; i > 0; --i)
	{
		j = i;
		while (j-- > 0)
		{
			printf("*");
		}

		printf("\n");	/* We finished prinitng for the row, so we move to the next one */
	}

	return 0;
}

