/* Using the break statement in a for statement */

#include <stdio.h>

int main()
{
	int x;	/* counter */

	for (x = 1; x <= 10; ++x)
	{
		if (x == 5)
		{
			break;
		}

		printf("%d ", x);
	}

	printf("\nBroke out of loop at x == %d\n", x);

	return 0;
}

