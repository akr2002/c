#include <stdio.h>

int main()
{
	int a = 0, b = 0;

	printf("Enter two integers :");
	scanf("%d%d", &a, &b);

	printf("%d & %d = %d\n", a, b, a & b);
	printf("%d | %d = %d\n", a, b, a | b);
	printf("%d ^ %d = %d\n", a, b, a ^ b);
	printf("~%d = %d, ~%d = %d\n", a, ~a, b, ~b);
	printf("%d << 1 = %d, %d << 1 = %d\n", a, a << 1, b, b << 1);
	printf("%d >> 1 = %d, %d >> 1 = %d\n", a, a >> 1, b, b >> 1);

	return 0;
}
