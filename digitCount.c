#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int count[10] = {0};
	char *num = NULL;
	int max[2] = {0}, len = 0, notNum = 0, i = 0;

	printf("Enter an integer: ");
	scanf("%m[^\n]%*c", &num);

	while (num[i] != '\0')
	{
		if((isdigit(num[i])))
		{
			switch(num[i])
			{
				case '0': ++count[0];
					  break;
					  
				case '1': ++count[1];
					  break;

				case '2': ++count[2];
					  break;

				case '3': ++count[3];
					  break;

				case '4': ++count[4];
					  break;

				case '5': ++count[5];
					  break;

				case '6': ++count[6];
					  break;

				case '7': ++count[7];
					  break;

				case '8': ++count[8];
					  break;

				case '9': ++count[9];
					  break;
			}
		}
		else ++notNum;

		++i;
	}

	len = strlen(num) - notNum;
	printf("%s has %d digits\n", num, len);

	for (i = 0; i < 10; ++i)
	{
		if (!(count[i]))
		{
			continue;
		}
		else printf("\n%d occurs %d times.\n", i, count[i]);
	}

	for (i = 0; i < 10; ++i)
	{
		if (count[i] > max[1])
		{
			max[1] = count[i];
			max[0] = i;
		}
	}

	printf("\n%d occurs maximum number of times (%d times)\n", max[0], max[1]);

	return 0;
}
