#include <stdio.h>

int main()
{

	int y = 1, x = 0;

	int l = (y++, x++) ? y : x;

	printf("%d\n", l);

	return 0;
}
