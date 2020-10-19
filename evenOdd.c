#include <stdio.h>

int main()
{
	int x;

	printf("Enter an integer: ");
	scanf("%d", &x);

	if (!(x % 2))
		printf("%d is even\n", x);
	else printf("%d is odd\n", x);

	return 0;
}

