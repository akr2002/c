/* Recursive factorial function */

#include <stdio.h>

long factorial( long number );

int main()
{
	int i;	/* counter */
	int num[10] = {0};

	/* loop 11 times; during eac iteration, caluclate factorial(i) and display result */
	for ( i = 0; i < 10; ++i )
	{
		num[i] = i;
		printf( "%2d! = %ld\n", i, factorial( num[i] ) );
	}

	return 0;
}

/* recursive definition of function factorial */
long factorial( long number )
{
	/* base case */
	if (number <= 1)
	{
		return 1;
	}
	else 
	{
		return ( number * factorial ( number - 1 ) );
	}
}

