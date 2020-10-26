#include <stdio.h>

int main()
{
	int a;
	float b;
	char c ;
	char str[41];

	/* Take input */
	printf("Enter postive integer value\n");
	scanf("%d", &a);
	printf("Enter float value\n");
	scanf("%f", &b);
	while ((getchar()) != '\n');
	printf("Enter a character\n");
	scanf("%c", &c);
	while ((getchar()) != '\n');
	printf("Enter a string\n");
	fgets(str, 41, stdin);

	/* Show output */
	printf("\n%d\n%f\n%c\n%s\n", a, b, c, str);

}
