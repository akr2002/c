#include <stdio.h>

int main()
{
	int n = 1, sum = 0, avg = 0, ctr = 0;

	printf("Now input an integer as many times you want, enter 0 to terminate\n");

	while(n)
	{
		printf("Enter an integer: ");
		scanf("%d", &n);
		sum += n;
		++ctr;
	}

	printf("Sum is %d\n", sum);
	printf("Average is %d\n", sum/--ctr);

	return 0;
}
