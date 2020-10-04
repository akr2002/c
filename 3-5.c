/* Develop a program that will input the miles driven and gallons used for each tankful. 
 * The program should calculate and display the miles driven and gallons used for each tankful. 
 * After processing all input information, the program should calculate and print the
 * combined miles per gallon obtained for all tankfuls. 
 */

#include <stdio.h>

int main()
{
	float gallons = 0.0;
	float miles = 0.0;
	float mileage = 0.0;
	float overallMileage = 0.0;
	int counter = 0;

	while (1)
	{
		printf("Enter the gallons used (-1 to end): ");
		scanf("%f", &gallons);
		if (gallons == -1) break;

		printf("Enter the miles driven: ");
		scanf("%f", &miles);

		mileage = miles / gallons;
		printf("The miles / gallon for this tank was %f\n\n", mileage);

		overallMileage += mileage;
		++counter;
	}

	overallMileage /= counter;
	printf("\nThe overall average miles/gallon was %f\n", overallMileage);

	return 0;
}

