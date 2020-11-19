/* Counting letter grades */

#include <stdio.h>

int main()
{
	int grade;	/* one grade */
	int aCount = 0;	/* number of As */
	int bCount = 0;	/* number of Bs */
	int cCount = 0; /* number of Cs */
	int dCount = 0; /* number of Ds */
	int fCount = 0; /* number of Fs */

	printf("Enter the letter grades.\n");
	printf("Enter the EOF character to end input.\n");	/* for NT based systems it is Ctrl+Z, for POSIX compliant systems it is Ctrl+D */

	/* loop until user types end-of-file key sequence */
	while ((grade = getchar())  != EOF)
	{
		/* determine which grade was input */
		switch (grade)
		{
			case 'a': case 'A': ++aCount; break;
			case 'b': case 'B': ++bCount; break;
			case 'c': case 'C': ++cCount; break;
			case 'd': case 'D': ++dCount; break;
			case 'f': case 'F': ++fCount; break;

			case '\n':	/* ignore newlines */
			case '\t':	/* tabs, */
			case ' ':	/* and spaces in input */
				break;

			default:	/* catch all other characters */
				printf("Incorrect letter grade entered.");
				printf("Enter a new grade.\n");
				break;
		}
	}

	/* output summary of results */
	printf("\nTotals for each letter grades are:\n");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("C: %d\n", cCount);
	printf("D: %d\n", dCount);
	printf("F: %d\n", fCount);

	return 0;
}

