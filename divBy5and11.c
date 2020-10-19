#include <stdio.h>

int main()
{
	int x;

	printf("Enter an integer: ");
	scanf("%d", &x);

	if ((x % 5 == 0) && (x % 11 == 0))
	{
		printf("%d is divisible by 5 and 11\n", x);
	}
	else printf("%d is not divisible by 5 and 11\n", x);

	return 0;
}

