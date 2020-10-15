#include <stdio.h>

int main()
{
	char name[20];
	int rollno;
	float m1, m2, m3;
	char grade;
	float percentage;

	printf("Enter name without space (max. 20 characters): ");
	fgets(name, 20, stdin);
	printf("Enter Roll number: ");
	scanf("%d", &rollno);
	printf("Enter marks of three subjects:\n");
	scanf("%f%f%f", &m1, &m2, &m3);

	percentage = ((m1 + m2 + m3) / 300.0) * 100;

	grade = (percentage > 90) ? 'A' : (percentage <= 90 && percentage > 75) ? 'B' : (percentage <= 75 && percentage > 60) ? 'C' : (percentage <= 60 && percentage > 50) ? 'D' : (percentage <= 50 && percentage > 35) ? 'E' : 'F';

	printf("Name: %s\n", name);
	printf("Roll number: %d\n", rollno);
	printf("Marks: %f, %f, %f\n", m1, m2, m3);
	printf("Percentage: %f\n", percentage);
	printf("Grade: %c\n", grade);

	return 0;
}
