/* Passing arrays and individual array elements to functions */

#include <stdio.h>

#define SIZE 5

void modifyArray(int b[], int size);
void modifyElement(int e);

int main()
{
	int a[SIZE] = {0, 1, 2, 3, 4};
	int i;	/* counter */

	printf("Effects of passing entire array by reference:\n\n"
			"The values of the original array are:\n");

	/* output original array */
	for (i = 0; i < SIZE; ++i)
	{
		printf("%3d", a[i]);
	}

	printf("\n");

	/* pass array to modifyArray by reference */
	modifyArray(a, SIZE);

	printf("The values of the modified array are:\n");

	/* output modified array */
	for (i = 0; i < SIZE; ++i)
	{
		printf("%3d", a[i]);
	}

	/* output value of a[3] */
	printf("\n\n\nEffects of passing elements by value:\n\n"
			"The value of a[3] is %d\n", a[3]);
	
	modifyElement(a[3]);

	/* output value of a[3] */
	printf("The value of a[3] is %d\n", a[3]);

	return 0;
}

/* in function modifyArray, "b" points to the original array "a" in memory */
void modifyArray(int b[], int size)
{
	int j;	/* counter */

	/* multiply each array element by 2 */
	for (j = 0; j < size; ++j)
	{
		b[j] *= 2;
	}
}

/* in function modifyElement, "e" is a local copy of array element a[3] passed from main */
void modifyElement(int e)
{
	/* multiply parameter by 2 */
	printf("Value in modifyELement is %d\n", e *= 2);
}

