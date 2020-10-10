/* Collecting money becomes increasingly difficult during periods of recession,
 * so companies may tighten their credit limits to prevent their accounts receivable
 * (money owed to them) from becoming too large. In response to prolonged recession,
 * one company has cut its customer's credit limits in half. Thus, if a customer had
 * a credit limit of $2000, this customer's credit limit is now $1000. If a customer
 * had a credit limit of $5000, this customer's credit limit is now $2500. Write a 
 * program that analyzes the credit status of three customers of this company. For
 * each customer you are given:
 *
 * a) The customer's account number
 * b) The customer's credit limit before the recession
 * c) The customer's current balance (i.e., the amount the customer ows the company).
 *
 * Your program should calculate and print the new credit limit for each customer and 
 * shouod determine (and print) which customers have current balances that exceed 
 * their new credit limits.
 */

#include <stdio.h>

int main()
{
	char accNo[11];
	float cLimitBefore = 0.0;	/* credit limit before recession */
	float currrentBal = 0.0;	/* current balance */
	float cLimitNew = 0.0;		/* new credit limit */

	printf("Enter account number: ");
	scanf("%s", &accNo);

	printf("Enter credit limit before recessoion
}
