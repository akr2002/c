#include <stdio.h>

int main()
{
	int x;

	printf("Enter an integer: ");
	scanf("%d", &x);

	if (x > 0)
	{
		printf("%d is positive\n", x);
	}
	else if (x == 0)
	{
		printf("%d is neutral\n", x);
	}
	else printf("%d is negative\n", x);

	return 0;
}

