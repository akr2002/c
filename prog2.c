#include <stdio.h>

int main()
{
	int c = 13;

	(c % 2 == 0) ? (printf(" it is an even number %d", c)) : (printf("it is an odd number %d", c));

	return 0;
}
