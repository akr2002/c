/* Class average program with sentinel-controlled repitition */

#include <stdio.h>

int main()
{
	int counter; /* number of grades enetered */
	int grade; /* grade value */
	int total; /* sum of grades */

	float average;	/* number with decimal point for average */

	/* initialization phase */
	total = 0;	/* initialiize total */
	counter = 0;	/* initialize loop counter */

	/* processing phase */
	/* get first grade from user */
	printf("Enter grade, -1 to end: ");
	scanf("%d", &grade);

	/* loop while sentinel value not yet read from user */
	while (grade != -1)
	{
		total = total + grade;	/* add grade to total */
		counter = counter + 1;	/* increment counter */

		/* get nextgrade from user */
		printf("Enter grade, -1 to end: ");
		scanf("%d", &grade);
	}

	/* termination phase */
	/* if user entered at least one grade */
	if (counter != 0)
	{
		/* calculate average of all grades entered */
		average = (float) total / counter;	/* avoid truncation */

		/* display average of all grade entered */
		printf("Class average is %.2f\n", average);
	}

	else	/* if no grades were entered, output message */
	{
		printf("No grades were entered\n");
	}

	return 0;
}

