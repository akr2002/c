/* Develop a C program that will determine if a department store customer has exceeded the credit 
 * limit on a charge account. For each customer, the following facts are available:
 * - Account number
 * - Balance at the beginning of the month
 * - Total of all items charged by this customer this month
 * - Total of all credits applied to this customer's account this month
 * - Allowd credit limit
 *
 * The program should input each of these facts, calculate the new balance (= beginning balance + 
 * charges - credits), and determine if the new balance exceeds the customer's credit limit. For
 * those customers whose credit limit is exceeded, the program should display the customer's
 * account number, credit limit, new balance and the message "Credit limit exceeded."
 */

#include <stdio.h>

int main()
{
	char accNo[11];
	float beginningBalance = 0.0;
	float totalCharges = 0.0;
	float totalCredits = 0.0;
	float creditLimit = 0.0;

	while (1)
	{
		/* Now we take input */
		printf("Enter account number (-1 to end): ");
		scanf("%s", &accNo);
		if (accNo[0] == '-') break;

		printf("Enter beginning balance: ");
		scanf("%f", &beginningBalance);

		printf("Enter total charges: ");
		scanf("%f", &totalCharges);

		printf("Enter total credits: ");
		scanf("%f", &totalCredits);
		
		printf("Enter credit limit: ");
		scanf("%f", &creditLimit);
		printf("\n");

		/* If beginningBalance + totalCredits is greater than creditLimit, we print the following */
		beginningBalance += totalCredits;
		if (beginningBalance > creditLimit)
		{
			printf("Account:\t%s\n", accNo);
			printf("Credit limit:\t%f\n", creditLimit);
			printf("Balance:\t%f\n", beginningBalance);
			printf("Credit Limit Exceeded.\n\n");
		}
	}

	return 0;
}

