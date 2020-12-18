#include <stdio.h>
#include <math.h>

int main()
{
	int low = 0, high, num, x, rem, count = 0;
	int result = 0;

	printf("Enter upper limit (exclusive): ");
	scanf("%d", &high);
	printf("Armstrong numbers till %d are: ", high);

	for (num = 1; num < high; ++num)
	{
		x = num;
		
		// calculate number of digits
		while (x)
		{
			x /= 10;
			++count;
		}

		x = num;

		// calculate sum of nth power of individual digits
		while (x)
		{
			rem = x % 10;
			result += pow(rem, count);
			x /= 10;
		}

		// calculate armstrong number
		if (result == num)
		{
			printf("%d ", num);
		}

		count = 0;
		result = 0;
	}

	printf("\n");

	return 0;
}
