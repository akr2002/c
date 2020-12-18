/* 1 + 1/2 + 1/3 + 1/4... */

#include <stdio.h>

int main()
{
	int n = 0, i = 0;
	float sum = 1;

	printf("Enter upper limit: ");
	scanf("%d", &n);

	printf("1");
	for (i = 2; i <= n; ++i)
	{
		printf(" + 1/%d", i);

		sum += 1 / (float)i;
	}

	printf("\nSum is %f\n", sum);

	return 0;
}

