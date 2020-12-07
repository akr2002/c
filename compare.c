#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter two integers: ");
	scanf("%d%d", &a, &b);

	if (a ^ b)
		printf("Not same\n");
	else printf("Same\n");

	return 0;
}
