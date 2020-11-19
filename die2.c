/* Roll a 6-sided die 6000 times */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7

int main()
{
	int face;	/* random die value 1 - 6 */
	int roll;	/* roll counter 1 - 6000 */
	int frequency[SIZE] = {0};	/* clear counts */

	srand(time(NULL));	/* seed random-number generator */

	/* roll die 6000 times */
	for (roll = 1; roll <= 6000; ++roll)
	{
		face = 1 + rand() % 6;
		++frequency[face];
	}

	printf("%s%17s\n", "Face", "Frequency");

	/* output frequency elements 1 - 6 in tabular format */
	for (face = 1; face < SIZE; ++face)
	{
		printf("%4d%17d\n", face, frequency[face]);
	}

	return 0;
}

