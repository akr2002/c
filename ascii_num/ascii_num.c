#include <stdio.h>
#include "ascii_num.h"

void print_num(int num)
{
	switch(num)
	{
		case 0: print_zero();
			break;

		case 1: print_one();
			break;

		case 2: print_two();
			break;

		case 3: print_three();
			break;
			
		case 4: print_four();
			break;

		case 5: print_five();
			break;

		case 6: print_six();
			break;

		case 7: print_seven();
			break;

		case 8: print_eight();
			break;

		case 9: print_nine();
			break;

		default: break;
	}

	return ;
}

int main()
{
	int num = -1;
	while (1)
	{
		printf("Enter an integer between 0 - 9 or press ^C to exit: ");
		scanf("%d", &num);
		if (num < 0 || num > 9)
		{
			continue;
		}
		print_num(num);
	}

	return 0;
}
