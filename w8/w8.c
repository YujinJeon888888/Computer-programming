#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//if ��� ��
int main()
{
	//int score;

	//printf("������ �Է��ϼ���: ");
	//scanf("%d", &score);

	//if (score < 60)
	//	printf("%d���� ���հ��Դϴ�\n", score);

	//if (score>=60)
	//	printf("%d���� �հ��Դϴ�\n", score);

	//if else
	/*if (score < 60)
		printf("���հ��Դϴ�.\n");
	else
		printf("�հ��Դϴ�.\n");*/

	//����if
	int score;
	char grade;

	printf("������ �Է��ϼ���: \n");
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

	printf("%c�����Դϴ�", grade);


	return 0;
}