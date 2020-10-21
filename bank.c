#include <stdio.h>
#include <string.h>

int main()
{
	char name[21], pin[5], repin[5], condition;
	float balance, deposit, withdraw;
	const char percent = '%';
	
	printf("Enter name (max. 20 characters): ");
	fgets(name, 20, stdin);

	printf("Enter PIN (max. 4 characters): ");
	fgets(pin, 5, stdin);

	printf("Enter balance: ");
	scanf("%f", &balance);

	if (balance < 3000)
	{
		balance -= balance * 0.03;
		printf("Balance is less than 3000. Imposed a penalty of 3%c. Current balance: %f\n", percent, balance);
	}

	// clear input buffer
	while ((getchar()) != '\n');

	printf("Enter re-pin: ");
	fgets(repin, 5, stdin);

	if (!strcmp(pin, repin))
	{
		printf("Enter D to deposit, W to withdraw: ");
		while ((getchar()) != '\n');
		scanf("%c", &condition);

		switch (condition)
		{
			case 'D': printf("Enter deposit amount: ");
				  scanf("%f", &deposit);
				  balance += deposit;
				  printf("Updated balance: %f\n", balance);
				  break;

			case 'W': printf("Enter withdraw amount: ");
				  scanf("%f", &withdraw);
				  if (withdraw > balance)
				  {
				  	printf("Withdraw amount is greater than balance. Aborting.\n");
					return -1;
				  }
				  else
				  {
				  	balance -= withdraw;
					printf("Updated balance: %f\n", balance);
				  }
				  break;

			default: printf("Invalid condition. Aborting.\n");
				 return -1;
		}
	}
	else
	{
		printf("PIN does not match. Aborting.\n");
		return -1;
	}

	return 0;
}

