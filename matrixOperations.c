/* This program performs matrix operations such as Addition, Subtraction, Multiplication and Transpose */

#include <stdio.h>

const int size = 3;

void add(int matrix[2][size][size]);
void subtract(int matrix[2][size][size]);
void multiply(int matrix[2][size][size]);
void transpose(int matrix[size][size]);
void input(int response);
void print(int matrix[size][size]);

void input(int response)
{	
	int matrix[2][size][size] = {0};
	int i = 0, j = 0;

	printf("Enter input for first matrix\n");

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			printf("matrix1[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matrix[0][i][j]);
		}
	}
	
	if (response != 4)
	{
		printf("Enter input for second matrix\n");

		for (i = 0; i < size; ++i)
		{
			for (j = 0; j < size; ++j)
			{
				printf("matrix2[%d][%d]: ", i + 1, j + 1);
				scanf("%d", &matrix[1][i][j]);
			}
		}
	}

	switch (response)
	{
		case 1: add(matrix);
			break;

		case 2: subtract(matrix);
			break;

		case 3: multiply(matrix);
			break;

		case 4: transpose(matrix[0]);
			break;

		default: printf("Illegal response received. Aborting...\n");
			 return ;
	}

	return ;
}

void print(int matrix[size][size])
{
	int i = 0, j = 0;	
	// Print result
	printf("\nResult is\n");
	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			printf("%3d", matrix[i][j]);
		}
		printf("\n");
	}

	return ;
}

void add(int matrix[2][size][size])
{

	int result[size][size] = {0};
	int i = 0, j = 0;

	// Calculating sum
	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			result[i][j] = matrix[0][i][j] + matrix[1][i][j];
		}
	}

	print(result);

	return ;
}

void subtract(int matrix[2][size][size])
{
	int result[size][size] = {0};
	int i = 0, j = 0;

	// Calculating difference
	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			result[i][j] = matrix[0][i][j] - matrix[1][i][j];
		}
	}

	print(result);

	return ;
}

void multiply(int matrix[2][size][size])
{
	int result[size][size] = {0};
	int i = 0, j = 0, k = 0;

	// Multiplying
	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			for (k = 0; k < size; ++k)
			{
				result[i][j] += matrix[0][i][k] * matrix[1][k][j];
			}
		}
	}

	print(result);

	return ;
}

void transpose(int matrix[size][size])
{
	int result[size][size] = {0};
	int i = 0, j = 0;
	
	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			result[i][j] = matrix[j][i];
		}
	}

	print(result);

	return ;
}

int main()
{
	char ans = '0';

	printf("This program performs the following operations on a 3x3 matrix\n"
			"1. Addition\n"
			"2. Subtraction\n"
			"3. Multiplication\n"
			"4. Transpose\n");
	printf("Enter your choice or any other character to exit: ");
	scanf("%c", &ans);

	switch (ans)
	{
		case '1': input(1);
			  break;
		
		case '2': input(2);
			  break;

		case '3': input(3);
			  break;

		case '4': input(4);
			  break;

		default: printf("Exiting...\n");
	}

	return 0;
}

