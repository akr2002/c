#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size = 0;
	printf("Enter size of array: ");
	scanf("%d", &size);

	int* arr = (int*)malloc(sizeof(int) * size);

	printf("Enter array elements:\n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d: ", i);
		scanf("%d", &arr[i]);
	}
	printf("Entered elements: ");
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
