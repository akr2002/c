#include <stdio.h>

int main()
{
	int isSpace = 0;
	int row = 8;
	char space = ' ';
	char asterisk = '*';
	int i = 0;

	for (i = 0; i < row; ++i)
	{
		if (!isSpace)
		{
			int j = 0;
			for (j = 0; j < row; ++j)
			{
				printf("* ");
			}
			isSpace = 1;
		}
		else if (isSpace)
		{
			int j = 0;
			for (j = 0; j < row; ++j)
			{
				printf(" *");
			}
			isSpace = 0;
		}
		printf("\n");
	}

	return 0;
}

