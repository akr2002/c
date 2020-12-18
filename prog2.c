#include <stdio.h>

int main()
{
	int i = 0, limit = 0, sum = 0;

	printf("Enter upper limit (exclusive): ");
	scanf("%d", &limit);

	for (i = 2; i < limit; ++i)
	{
		sum += -1 * (3 + 2);
	}

	sum *= -1;

	printf("sum is %d\n", sum);

	return 0;
}

