#include <stdio.h>
#include <string.h>

int toInt(char a);
int error(void);

int toInt(char a)
{
	switch (a)
	{
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		case '0': return 0;
	}
	return -1;
}

int error()
{
	printf("Illegal ISBN code. Aborting.\n");
	return 1;
}

int main()
{
	char isbn[12];
	int i = 1, val = 0, sum = 0;

	printf("Enter 10 digit ISBN code: ");
	fgets(isbn, 11, stdin);

	if (strlen(isbn) != 10)
	{
		return error();
	}

	for (i = 0; i < 10; ++i)
	{
		val = toInt(isbn[i]);
		if (val < 0)
		{
			return error();
		}
		sum += (i + 1) * val;
	}

	if (!(sum % 11))
	{
		printf("Entered ISBN code is valid.\n");
	}
	else return error();

	return 0;
}

