#include <stdio.h>

int main()
{
	int x, y, z, largest;

	printf("Enter three integers:\n");
	scanf("%d%d%d", &x, &y, &z);

	largest = x;

	largest = (y > x && y > z ? y : (z > y && z > x) ? z : x);

	printf("%d is the largest.\n", largest);

	return 0;
}

