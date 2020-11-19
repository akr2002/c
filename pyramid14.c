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
		else if (rows < 0)
		{
			printf("Invalid input.\n");
		}
	}


	for (i = 0; i < rows; ++i)	/* change rows */
	{
		j = 0;
		while (j++ <= i)
		{
			printf("*");
		}
		printf("\n");	/* we finished printing for the row, it is time to go to the next one */
	}

	return 0;
}

