/* Creating and using programmer-defined function */

#include <stdio.h>

int square(int y);

int main()
{
	int x;	/* counter */

	for (x = 1; x <= 10; ++x)
	{
		printf("%d ", square(x));
	}

	printf("\n");

	return 0;
}

int square(int y)
{
	return y * y;
}

