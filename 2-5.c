/* Using if statements, relational operators, and equality operators */

#include <stdio.h>

int main()
{
	int num1; /* first number to be read from the user */
	int num2; /* second number to be read from the user */

	printf("Enter two integers, and I will tell you the relationships they satify:\n");

	scanf("%d%d", &num1, &num2); /* read two ntegers */

	if (num1 == num2 )
	{
		printf("%d is equal to %d\n", num1, num2);
	}

	if (num1 != num2)
	{
		printf("%d is not equal to %d\n", num1, num2);
	}

	if (num1 < num2)
	{
		printf("%d is less than %d\n", num1, num2);
	}

	if (num1 > num2)
	{
		printf("%d is greater than %d\n", num1, num2);
	}

	if (num1 <= num2)
	{
		printf("%d is less than or equal to %d\n", num1, num2);
	}

	if (num1 >= num2)
	{
		printf("%d is greater than or equal to %d\n", num1, num2);
	}

	return 0;
}
