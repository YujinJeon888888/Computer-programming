#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int getIncome(void);
char classifyGrade(int income);
double setTaxRate(char grade);
double  calTax(int income, double rate);




int main(void)

{

	int income = getIncome();

	char grade = classifyGrade(income);

	double rate = setTaxRate(grade);

	double tax = calTax(income, rate);



	return 0;

}

int getIncome(void)
{
	int income = 0;

	printf("Enter your income in ten thousand won: ");

	scanf("%d", &income);

	printf("You entered %d\n", income);
}

char classifyGrade(int income)
{
	char grade = '0';

	if (income <= 0)

		printf("Income error!\n");

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

	printf("Grade: %c\n", grade);
}

double setTaxRate(char grade)
{
	double rate = 0.0;

	switch (grade)

	{

	case 'A':

		rate = .06;

		break;

	case 'B':

		rate = .15;

		break;

	case 'C':

		rate = .24;

		break;

	case 'D':

		rate = .35;

		break;

	case 'E':

		rate = .38;

		break;

	case 'F':

		rate = .40;

		break;

	case 'G':

		rate = .42;

		break;

	default:

		printf("Grade error!\n");

		break;

	}
}

double  calTax(int income, double rate)
{
	double tax = 0.0;

	tax = income * rate;

	(income <= 0) ?

		printf("Tax error!\n") :

		printf("Tax: %.4f ten thousand won (%d won)\n", tax, (int)(tax * 10000));

}
