/* This program sort's an array's elements in ascending order */

#include <stdio.h>

#define SIZE 10

int main()
{
	/* initialize */
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int pass;	/* passes counter */
	int i;	/* comparisions counter */
	int hold;	/* temporary location used to swap array elements */

	printf("Data items in original order\n");

	/* output original array */
	for (i = 0; i < SIZE; printf("%4d", a[i++]));

	/* bubble sort */
	/* loop to control number of passes */
	for (pass = 1; pass < SIZE; ++pass)
	{
		/* loop to control number of comparisions per pass */
		for (i = 0; i < SIZE - 1; ++i)
		{
			/* compare adjacent elements and swap them if first element is greater than the second element */
			if (a[i] > a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
		}
	}

	printf("\nData items in ascending order\n");

	/* output stired array */
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}

	printf("\n");

	return 0;
}
