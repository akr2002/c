/* Treating character arrays as strings */

#include <stdio.h>

int main()
{
	char string1[20];
	char string2[] = "string literal";
	int i;	/* counter */

	/* read string from user into array string1 */
	printf("Enter a string: ");
	scanf("%s", string1);	/* input ended by whitespace character */

	/* output strings */
	printf("string1 is: %s\nstring2 is: %s\n"
			"string1 with spaces between characters is:\n", string1, string2);

	/* output characters untill null character is reached */
	for (i = 0; string1[i] != '\0'; ++i)
	{
		printf("%c ", string1[i]);
	}

	printf("\n");

	return 0;
}

