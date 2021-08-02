#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int* arr = (int*)malloc(sizeof(int) * (argc - 1));
	const int size = argc - 1;

	for (int i = 1; i < argc; ++i)
	{
		arr[i - 1] = atoi(argv[i]);
	}

	printf("Entered array: ");
	for (int i = 0; i < size; printf("%-3d", arr[i++]));
	printf("\n");

	for (int start = 0, end = size - 1; start < end; ++start, --end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	}

	printf("Reversed array: ");
	for (int i = 0; i < size; printf("%-3d", arr[i++]));
	printf("\n");

	free(arr);

	return 0;
}
