#include <stdio.h>

int main()
{
	int x, y, z, largest;

	printf("Enter three integers:\n");
	scanf("%d%d%d", &x, &y, &z);

	largest = x;

	if (y > x)
	{
		if (z > y)
		{
			largest = z;
			printf("%d is the largest\n", largest);
		}
		else 
		{
			largest = y;
			printf("%d is the largest\n", largest);
		}
	}

	else printf("%d is the largest\n", largest);

	return 0;
}

