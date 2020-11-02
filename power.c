#include <stdio.h>

int main()
{
	int pow = 0, count = 0, var = 0;
	printf("Enter integer and power: ");
	scanf("%d%d", &var, &pow);

	printf("var: %d\n", var);

	if (!pow) 
	{
		printf("%d raised to the power %d is 1\n", var, pow);
		return 0;
	}

	else if (pow > 0)
	{
		printf("\nVar: %d\n", var);
		while (count++ < pow){
			printf("\nVar: %d\n", var);
			var *= var;
		}
	}

	/*else
	{
		while (count++ < pow)
		{
			var = 
		}
	}*/

	printf("Result: %d\n", var);

	return 0;
}
