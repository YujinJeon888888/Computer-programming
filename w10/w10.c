#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//¼÷Á¦
int main()

{

	int income = 0;

	while (1)
	{
		printf("Enter your income in ten thousand won: ");

		scanf("%d", &income);
		if (income == -1)
			break;
		printf("You entered %d\n", income);



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



		double tax = 0.0;

		tax = income * rate;

		(grade == '0') ?

			printf("Tax error!\n") :

			printf("Tax: %.4f ten thousand won (%d won)\n", tax, (int)(tax * 10000));


	}
	return 0;

}