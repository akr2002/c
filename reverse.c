#include <stdio.h>

int main()
{
	int i = 0;
	int arr[5] = {0};

	printf("Enter 5 integers: ");
	for (i = 0; i < 5; scanf("%d", &arr[i++]));

	for (i = 0; i < 5; ++i)
	{
		int num = 0, rem = 0, rev = 0;
		num = arr[i];
		while (num)
		{
			rem = num % 10;
			//printf("rem: %d ", rem);
			rev = rev * 10 + rem;
			//printf("rev: %d", rev);
			num = num / 10;
			//printf("num: %d", num);
		}
		arr[i] = rev;
	}

	printf("The reversed elements are: ");
	for (i = 0; i < 5; printf("%d ", arr[i++]));
	printf("\n");

	return 0;
}
