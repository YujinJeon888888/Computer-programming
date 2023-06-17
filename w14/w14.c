//¼÷Á¦
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int printDate(int month, int day);

int main()
{
	printf("Enter the month as a number: \n");
	int month=0;
	scanf("%d", &month);
	
	printf("Enter the day of the month: \n");
	int day=0;
	scanf("%d", &day);

	printDate(month, day);

	return 0;
}

int printDate(int month, int day)
{

	char months[12][4] = {
	"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"
	};
	char date[50];
	sprintf(date, "%s. %d", months[month - 1], day);
	puts(date);
}