#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	
	int income=0;
	printf("enter your income: ");
	scanf("%d", &income);
	printf("income: %d\n", income);

	char grade = '0';


	if (income <= 0)
		printf("income error!\n");
	else if (income <= 1200)
		grade = 'A';
	else if (income <= 4600)
		grade = 'B';
	else if (income <= 8800)
		grade = 'C';
	else if (income <= 15000)
		grade = 'D';
	else if (income <= 30000)
		grade = 'E';
	else if (income <= 50000)
		grade = 'F';
	else
		grade = 'G';
	
	printf("grade: %c\n", grade);

	double rate=0.0;

	switch (grade)
	{
		case'A':
			rate = 0.06;
			break;
		case'B':
			rate = 0.15;
			break;
		case'C':
			rate = 0.24;
			break;
		case'D':
			rate = 0.35;
			break;
		case'E':
			rate = 0.38;
			break;
		case'F':
			rate = 0.40;
			break;
		case 'G':
			rate = 0.42;
			break;
		default:
			printf("grade error!\n");
			break;
	}

	double tax = 0.0;
	tax = income * rate;
	grade=='0' ? printf("tax error!\n") : printf("%f\n",tax);

	const double exrate = 8.5;
	double dDollars = tax * exrate;
	printf("%f\n", dDollars);

	const int base = 100;
	int dollars = (int)((dDollars / base)*base);
	int cents = (int)((dDollars-dollars)* base);
	
	const int comma = 1000;
	if (dollars > comma)
	{
		int thousands = dollars / comma;
		int tens = dollars % comma;
		printf("%d, %03d dollars %d cents\n", thousands, tens, cents);

	}
	else if (dollars > 0)
		printf("%d dollars %d cents\n", dollars, cents);
	else
		printf("%d cents\n", cents);


	return 0;
}