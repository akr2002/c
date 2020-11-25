#include <stdio.h>

int main()
{
	int arr[10] = {0};
        int i = 0;

	printf("Enter 10 integers: ");

	for (i = 0; i < 10; scanf("%d", &arr[i++]));

	printf("The required elements are:");

	for (i = 1; i < 10; i += 2)
	{
		if (arr[i] % 2)
		{
			printf("%3d", arr[i]);
		}
	}

	printf("\n");

	return 0;
}
