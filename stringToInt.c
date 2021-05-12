#include <stdio.h>
#include <string.h>

void printBehavior(const int argc, char** argv);
int lookForSwitches(const int argc, char** argv); /* we refer to arguments starting with a hyphen as a switch */
void printVersion(void);
void printHelp(void);
int isDigit(const char c);
int toInt(const char* str);

/* prints behavior of switches */
void printBehavior(const int argc, char** argv)
{
	for (int i = 1; i < argc; ++i)
	{
		if ((!strcmp(argv[i], "-h")) || (!strcmp(argv[i], "--help")))
		{
			printHelp();
		}

		else if ((!strcmp(argv[i], "-v")) || (!strcmp(argv[i], "--version")))
		{
			printVersion();
		}
	}
}

/* returns 0 if a switch is found; returns a non-zero integer otherwise */
int lookForSwitches(const int argc, char** argv)
{
	for (int i = 1; i < argc; ++i)
	{
		if (argv[i][0] == '-')
		return 0;
	}

	return 1;
}

void printVersion()
{
	printf("Version 1.0\n");
}

void printHelp()
{
	printf("Usage: stringToInt [arg] ...\n"
			"-h, --help: Print this message\n"
			"-v, --version: Print version\n");
}

int isDigit(const char c)
{
	if (c >= '0' && c <= '9')
		return c - '0';
	else return -1;
}

int toInt(const char *str)
{
	int num = 0;

	for (int i = 0; str[i] != '\0'; ++i)
	{
		int d = isDigit(str[i]);
		if (d > -1)
		{
			num = num * 10 + d;
		}
	}

	return num;
}

int main(int argc, char** argv)
{
	if (argc == 1)
	{
		printHelp();

		return 0;
	}

	if (!lookForSwitches(argc, argv))
	{
		printBehavior(argc, argv);

		return 0;
	}

	for (int i = 1; i < argc; ++i)
	{
		int num = toInt(argv[i]);
		printf("%d ", num);
	}
	printf("\n");

	return 0;
}
