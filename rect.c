#include <stdio.h>

int main()
{
	int len = 0;
	int breadth = 0;
	int area = 0;

	printf("Enter length: ");
	scanf("%d", &len);
	printf("Enter breadth: ");
	scanf("%d", &breadth);

	area = len * breadth;

	printf("Area if the rectangle is %d sq. units\n", area);

	return 0;
}


