#include <stdio.h>
#include <math.h>

long factorial(long number);

long factorial(long number)
{
	int i = 0, a = 0;

	if (number <= 1)
	{
		return 1;
	}
	else 
	{
		return (number * factorial (number - 1));
	}

}

int main()
{
	double sum = 1;
       	int limit = 0, i = 0, a = 0;

	printf("Enter upper limit (exclusive) and number: ");
	scanf("%d%d", &limit, &a);

	for (i = 1; i < limit; ++i)
	{
		sum += pow(a, i + 1) / factorial(i);
	}

	printf("Sum is %lf\n", sum);

	return 0;
}

