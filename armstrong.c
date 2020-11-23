#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0, n = 0, p = 0, s = 0,c = 0, x, d;

	for (i = 100; i < 1000; ++i)
	{
		n = i;
		x = n;

		do
		{
			p = n % 10;
			++c;	/* counts the number of digits and assign it to c */
			n = n / 10;
		}while(n != 0);

		n = x;	/* restore the value of n */

		do
		{
			d = n % 10;
			s = s + pow(d, c);
			n = n / 10;
		}
		while(n != 0);

		if (s == i)
		{
			printf("%d is an armstrong number.\n", s);
		}
	}

	return 0;
}
