#include <stdio.h>

int main()
{
	int num1, num2;
	char op;

	/*printf("Enter operator: ");
	scanf("%c", &op);
	printf("Enter two numbers\n");
	scanf("%d%d", &num1, &num2);*/

	printf("Enter expression: ");
	scanf("%d%c%d", &num1, &op, &num2);

	switch(op)
	{
		case '+': printf("%d + %d = %d\n", num1, num2, num1 + num2);
			  break;

		case '-': printf("%d - %d = %d\n", num1, num2, num1 - num2);
			  break;

		case '*': printf("%d * %d = %d\n", num1, num2, num1 * num2);
			  break;

		case '/': if (!num2)
			  {
			  	printf("Cannot divide by 0\n");
				return -1;
			  }
			  else
			  {
			  	printf("%d / %d = %d\n", num1, num2, num1 / num2);
				break;
			  }
		default: printf("Invalid operator\n");
			 return -1;
	}

	return 0;
}
