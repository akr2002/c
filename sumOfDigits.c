#include <stdio.h>

int main()
{
	int sum = 0;
	int num;

	printf("Enter an integer: ");
	scanf("%d", &num);

	while (num)
	{
		sum += num % 10;
		num /= 10;
	}

	printf("Sum is %d\n", sum);

	return 0;
}
