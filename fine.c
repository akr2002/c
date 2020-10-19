#include <stdio.h>

int main()
{
	int days = 0;
	int fine = 0;

	printf("Enter number of days: ");
	scanf("%d", &days);

	if (days > 20)
	{
		fine += (1 * 10) + (5 * 10) + ((days - 20) * 8);
	}
	else if (days > 10)
	{
		fine += (1 * 10) + ((days - 10) * 5);
	}
	else fine += 1 * days;

	printf("Fine is Rs %d\n", fine);

	return 0;
}
