#include <stdio.h>

int main()
{
	int a = 0, b = -1, c = 1, d = 5;

	int z = a || b && c || d;

	printf("%d\n", z);

	return 0;	
}
