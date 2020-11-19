/* Histogram printing program */

#include <stdio.h>

#define SIZE 10

int main()
{
	int n[SIZE] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
	int i;	/* outer counter for array elements */
	int j;	/* inner countr counts *s in each histogram bar */

	printf("%s%13s%17s\n", "Element", "Value", "Histogram");

	/* for each element of array n, output a bar of the histogram */
	for (i = 0; i < SIZE; ++i)
	{
		printf("%7d%13d        ", i, n[i]);

		for (j = 1; j <= n[i]; ++j)	/* print 1 bar */
		{
			printf("%c", '*');
		}

		printf("\n");	/* end a histogram bar */
	}

	return 0;
}
