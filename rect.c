#include <stdio.h>

int main()
{
	int len = 0;
	int breadth = 0;
	int area = 0;
	int perimeter = 0;

	printf("Enter length: ");
	scanf("%d", &len);
	printf("Enter breadth: ");
	scanf("%d", &breadth);

	perimeter = (2 * (len + breadth));
	area = len * breadth;

	printf("Perimeter: %d inches.\n", perimeter);
	printf("Area: %d sq. inches.\n", area);

	return 0;
}


