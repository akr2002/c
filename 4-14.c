/* One interesting application of computers is drawing graphs and bar charts (sometimes called "histograms").
 * Write a program that reads five numbers (each between 1 and 30). For each number read, your program should
 * print a line containing that number of adjacent asterisks. For example, if your program reads the number 
 * seven, it should print *******.
 */

#include <stdio.h>

int main()
{
	int number[5];
	int i = 0;
	int j = 0;

	printf("Enter five numbers between 1 - 30:\n\n");

	for (i = 0; i < 5; ++i)
	{
		printf("%d: ", i+1);
		scanf("%d", &number[i]);

		if (number[i] < 0 || number[i] > 30)
		{
			printf("Please enter a positive integer between 1 - 30.\n");
			--i;
		}
	}

	printf("The histogram:\n\n");

	for (i = 0; i < 5; ++i)
	{
		j = 0;
		printf("%d ", i+1);
		while (j++ < number[i])
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

