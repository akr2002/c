/* Class average program with counter-controlled repititiom */

#include <stdio.h>

int main()
{
	int counter;	/* number of grade to be entered next */
	int grade;	/* grade value */
	int total;	/* sum of grades input by user */
	int average;	/* average of grades */

	/* initialization phase */
	total = 0;	/* initialize total */
	counter = 1;	/* initialize large counter */

	/* processing phase */
	while ( counter <= 10 )
	{
		printf("Enter grade: ");
		scanf("%d", &grade);
		total = total + grade;
		counter = counter + 1;
	}

	/* termination phase */
	average = total / 10;	/* integer division */

	printf("Class average is %d\n", average);	/* display result */

	return 0;
}

