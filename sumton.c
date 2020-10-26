#include <stdio.h>

const int a = 1, b = 2;
int main()
{
	int n = 0, sum = 0;
	while ( n < 1 )
	{
		printf("Enter a limit: ");
		scanf("%d", &n);
	}
	
	sum = n * (n + 1) / 2;

	printf("Sum upto is %d\n", sum);

	return 0;
}
