#include <stdio.h>

int noArgs(void);
void args(int a, int b);

int noArgs()
{
	printf("Currently in a function with no arguments. Returning 5 to main()\n");

	return 5;
}

void args(int a, int b)
{
	printf("Currently in a function with arguments. This one does not return value.\n"
			"The accepted arguments are %d and %d\n", a, b);

	return ;
}

int main()
{
	printf("Currently in main()\n");

	noArgs();

	printf("Back in main()\n");

	args(9, 42);

	printf("Back in main(), again\n");

	return 0;
}
