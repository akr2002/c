#include <stdio.h>

int main()
{
	int num, count, sum = 0;
	printf("Enter an integer: ");
	scanf("%d", &num);

	for (count = 1; count <= num; ++count)
	{
		sum += count;
	}

	printf("Sum is %d\n", sum);

	return 0;
}
