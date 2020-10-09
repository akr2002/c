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
			printf("Exiting the program.\n");
			return -1;
		}

		else if (rows < 0)
		{
			printf("Invlid value.\n");
		}
	}

	for (i = 0; i < rows; ++i)
	{
		for (j = 0; j < i; ++j)	/* prints blank spaces */
		{
			printf(" ");
		}

		for (k = rows - i; k > 0; --k)	/* prints asterisks */
		{
			printf("*");
		}

		printf("\n");	/* goes to next row */
	}

	return 0;
}

