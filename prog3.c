#include <stdio.h>

int main()
{
	int i1, i2;
	float f1, f2;

	printf("Enter two integers:\n");
	scanf("%d%d", &i1, &i2);

	printf("Enter two floating point values:\n");
	scanf("%f%f", &f1, &f2);

	printf("Sum of int: %d\n", i1 + i2);
	printf("Difference of int: %d\n", i1 - i2);

	printf("Sum of floats: %f\n", f1 + f2);
	printf("Difference of floats: %f\n", f1 - f2);

	return 0;
}
