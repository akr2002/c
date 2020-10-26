#include <stdio.h>

int main()
{
	int amount = -1;

	while (amount < 0)
	{
		printf("Enter amount: ");
		scanf("%d", &amount);

		if (amount < 0)
		{
			printf("Please enter a valid amount.\n");
			continue;
		}
		else if (amount == 0)
		{
			printf("Exiting program.");
			return 0;
		}
	}

	printf("\n2000: %d\n", amount / 2000);
	amount -= 2000 * (amount / 2000);

	printf("500: %d\n", amount / 500);
	amount -= 500 * (amount / 500);

	printf("200: %d\n", amount / 200);
	amount -= 200 * (amount / 200);

	printf("100: %d\n", amount / 100);
	amount -= 100 * (amount / 100);

	printf("50: %d\n", amount / 50);
	amount -= 50 * (amount / 50);

	printf("20: %d\n", amount / 20);
	amount -= 20 * (amount / 20);

	printf("10: %d\n", amount / 10);
	amount -= 10 * (amount / 10);

	printf("5: %d\n", amount / 5);
	amount -= 5 * (amount / 5);

	printf("2: %d\n", amount / 2);
	amount -= 2 * (amount / 2);

	printf("1: %d\n", amount / 1);
	amount -= 1 * (amount / 1);

	return 0;
}
