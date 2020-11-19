/* Static arrays are initialized to zero */

#include <stdio.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main()
{
	printf("First call to each function:\n");
	staticArrayInit();
	automaticArrayInit();

	printf("\n\nSecond call to each function:\n");
	staticArrayInit();
	automaticArrayInit();

	return 0;
}

/* function to demonstrate a static local array */
void staticArrayInit(void)
{
	/* initializes elements to 0 first time function is called */
	static int array1[3];
	int i;	/* counter */

	printf("\nValues on entering staticArrayInit:\n");

	/* output contents of the array */
	for (i = 0; i <= 2; ++i)
	{
		printf("array1[%d] = %d ", i, array1[i]);
	}

	printf("\nValues on exiting staticArrayInit:\n");

	/* modify and output contents of array1 */
	for (i = 0; i <= 2; ++i)
	{
		printf("array1[%d] = %d ", i, array1[i] += 5);
	}
}

/* function to demonstrate automatic local array */
void automaticArrayInit(void)
{
	/* initializes elements each time function is called */
	int array2[3] = {1, 2, 3};
	int i;	/* counter */

	printf("\n\nValues on entering automaticArrayInit:\n");
	
	/* output contents of array2 */
	for (i = 0; i <= 2; ++i)
	{
		printf("array2[%d] = %d ", i, array2[i]);
	}

	printf("\nValues on exiting automaticArrayInit:\n");

	/* modify and output contents of array2 */
	for (i = 0; i <= 2; ++i)
	{
		printf("array2[%d] = %d ", i, array2[i] += 5);
	}
}

