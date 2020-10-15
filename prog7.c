#include <stdio.h>

int main()
{
	int x = 10, y;
	(y = x) = 100;
	printf("%d\n", y);

	return 0;
}
