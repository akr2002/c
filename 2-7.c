#include <stdio.h>

int main(int argc, char** argv)
{
	int isSpace = 0;
	int row = 8;
	char space = ' ';
	char asterisk = '*';
	int i = 0;

	if (argv)
	{
		asterisk = argv[0][0];
		space = argv[1][0];
	}

	if (argc)
	{
		row = argc;
	}

	for (i = 0; i < row; ++i)
	{
		if (!isSpace)
		{
			int j = 0;
			for (j = 0; j < row; ++j)
			{
				printf("%c%c", asterisk, space);
			}
			isSpace = 1;
		}
		else if (isSpace)
		{
			int j = 0;
			for (j = 0; j < row; ++j)
			{
				printf("%c%c", space, asterisk);
			}
			isSpace = 0;
		}
		printf("\n");
	}

	return 0;
}

