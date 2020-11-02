// Find even/odd from 81 to 51

#include <stdio.h>

int main()
{
	int i = 0;

	for (i = 81; i > 50; --i)
	{
		if (i % 2 == 0)
			printf("%d is even\n", i);
		else printf("%d is odd\n", i);
	}

	return 0;
}
