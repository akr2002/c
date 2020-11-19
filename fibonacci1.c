/* Recursive Fibonacci function */

#include <stdio.h>

long fibonacci( long n );

int main()
{
	long result;	/* fibonacci value */
	long number;	/* number input by user */

	/* obtain integer from user */
	printf( "Enter an integer: ");
	scanf( "%ld", &number );

	/* calculate fibonacci value for number input by user */
	result = fibonacci( number );

	/* display result */
	printf( "Fibonacci( %ld ) = %ld\n", number, result );

	return 0;
}

/* Recursive definition of function fibonacci */
long fibonacci( long n )
{
	/* base case */
	if ( n == 0 || n == 1 )
	{
		return n;
	}
	else	/* recursive step */
	{
		return fibonacci( n - 1 ) + fibonacci( n - 2 );
	}
}

