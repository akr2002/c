/* One large chemical company pays its salespeople on a commission basis. The salespeople 
 * receive $200 per week plus 9% of their gross sales for that week. For example, a
 * salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of $5000,
 * or a total of $650. Develop a program that will input each salesperson's gross sales for
 * last week and will calculate and display that salesperson's earnings. Process the 
 * salesperson's figures at a time. 
 */

#include <stdio.h>

float computeSalary(float grossSale)
{
	float commission = 0.09;	/* 9% */
	float salary = 0.0;

	salary = (grossSale * commission);

	return salary;
}

int main()
{
	float baseSalary = 200.00;
	float grossSale = 0.0;
	float salary = 0.0;

	while (1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &grossSale);

		if (grossSale == -1) break;
		
		salary = computeSalary(grossSale) + baseSalary;

		printf("Salary is %f\n\n", salary);
	}

	return 0;
}

