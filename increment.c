/* Preincrementing and postincrementing */

#include <stdio.h>

int main()
{
	int c;

	/* demonstrate postincrement */
	c = 5;
	printf("%d\n", c);
	printf("%d\n", c++);
	printf("%d\n\n", c);

	/* demonstrate preincrement */
	c = 5;
	printf("%d\n", c);
	printf("%d\n", ++c);
	printf("%d\n", c);

	return 0;
}

