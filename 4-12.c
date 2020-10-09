#include <stdio.h>

int main()
{
	int rows = 0;
	int i = 0;
	int j = 0;
	int k = 0;

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

	for (i = 0; i < rows; ++i)
	{
		for (j = i; j < rows - 1; ++j)	/* prints blank spaces */
		{
			printf(" ");
		}

		for (k = 0; k <= i; ++k)	/* prints asterisks */
		{
			printf("*");
		}

		printf("\n");	/* goes to next row */
	}

	return 0;
}

