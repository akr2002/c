#include <stdio.h>

int main()
{
	int odd = 1, sum = 0, n = 0;

	printf("Enter upper limit: ");
	scanf("%d", &n);

	do
	{
		sum += odd;
		odd += 2;
	}
	while(odd < n);

	printf("Sum upto %d is %d\n", n, sum);

	return 0;
}
