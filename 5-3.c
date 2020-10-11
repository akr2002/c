/* Shifted, scaled integers produced by 1 + rand() % 6 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;	/* counter */

	for (i = 1; i <= 20; ++i)
	{
		/* pick a random number from 1 to 6 and output it */
		printf("%10d", 1 + (rand() % 6));

		/* if counter is divisible by 5, begin new line of output */
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}

