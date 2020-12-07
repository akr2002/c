#include <stdio.h>

int main()
{
	/* taking lower limit as 2 instead of 1 since 1 is neither prime nor composite */
	int low = 2, high, flag;

	printf("Enter upper limit:  ");
	scanf("%d", &high);

	printf("Prime numbers between %d and %d are: ", 1, high);
	
	while (low < high)
	{
		flag = 0;

		for (int i = 2; i <= low/2; ++i)
		{
			if (low % i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("%d ", low);

		++low;
	}

	printf("\n");

	return 0;
}

