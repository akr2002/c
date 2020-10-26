#include <stdio.h>

int main()
{
	float f;

	printf("Enter a float: ");
	scanf("%f", &f);

	int i;
	i = (int)f;

	printf("Int version: %d\n", i);

	return 0;
}
