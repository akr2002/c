#include <stdio.h>

int main()
{
	long power = 0;
	int num = 0, p = 0;

	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Enter power: ");
	scanf("%d", &p);

	if (p == 0)
	{
		printf("Result is 1\n");
		return 0;
	}
	else if (p == 1)
	{
		printf("Result is %d\n", num);
		return 0;
	}

	power = num;

pow:
	power *= num;
	--p;
	if(p > 1) goto pow;

	printf("Result is %ld\n", power);

	return 0;
}
