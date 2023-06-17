#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//if 사용 예
int main()
{
	//int score;

	//printf("점수를 입력하세요: ");
	//scanf("%d", &score);

	//if (score < 60)
	//	printf("%d점은 불합격입니다\n", score);

	//if (score>=60)
	//	printf("%d점은 합격입니다\n", score);

	//if else
	/*if (score < 60)
		printf("불합격입니다.\n");
	else
		printf("합격입니다.\n");*/

	//다중if
	int score;
	char grade;

	printf("점수를 입력하세요: \n");
	scanf("%d", &score);

	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else 
		grade = 'F';

	printf("%c학점입니다", grade);


	return 0;
}