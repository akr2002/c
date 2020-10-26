#include <stdio.h>

int main()
{
	char ch;
	char *s = NULL, *str = NULL;
	int i = 0;
	
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	while ((getchar()) != '\n');
	
	printf("Enter a string: ");
	scanf("%m[^\n]%*c", &s);
	
	printf("Enter a sentence :");
	scanf("%m[^\n]%*c", &str);
	
	printf("%c\n", ch);
	printf("%s\n", s);
	printf("%s\n", str);
	
	return 0;
}