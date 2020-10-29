#include <stdio.h>

int main()
{
	long long factorial = 0;
	int num = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (num == 0 || num == 1)
	{
		printf("Factorial is 1\n");
		return 0;
	}

	factorial = num;
	
fact:
	factorial *= --num;
       if (num > 1) goto fact;

	printf("Factorial is %lld\n", factorial);

	return 0;	
}
