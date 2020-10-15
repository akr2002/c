#include <stdio.h>

int main()
{
	int x = 1, y = 2, z = 3;
	//x = y = z;
	z *= ++y + 5;
	printf("%d\n", z);
	return 0;
}
