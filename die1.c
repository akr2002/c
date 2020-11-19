/* Randomizing die-rolling program */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;	/* counter */
	unsigned seed;	/* number used to seed random number generator */

	printf("Enter seed: ");
	scanf("%u", &seed);

	srand(seed);	/* seed random number generator */

	for (i = 1; i <= 10; ++i)
	{
		/* pick a random number from 1 to 6 and output it */
		printf("%10d", 1 + (rand() % 6));

		/* if the counter is divisible by 5, begin a newline of output */
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}

