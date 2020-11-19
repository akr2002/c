/* Addition program */

#include <stdio.h>

int main()
{
	int integer1;	/* first number to be input by the user */
	int integer2;	/* second number to be input by the user */
	int sum;	/* variable in which sum will be stored */

	printf("Enter first integer: ");
	scanf("%d", &integer1);

	printf("Enter second integer: ");
	scanf("%d", &integer2);

	sum = integer1 + integer2;

	printf("Sum is %d", sum);

	return 0;
}
