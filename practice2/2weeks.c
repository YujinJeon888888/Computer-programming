//������ ���α׷��� ȯ�濡��
//printf() �Լ��� �̿��Ͽ� ������ �й��� �̸��� ����غ�����!
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num = 0;
	printf("enter your school number: \n");
	scanf(" %d", &num);//scanf �Լ�= scanf("%~��", &������); , ���� �ذ�: ������ϰ� ������ ���� �� ó���� ����,int�� �̸� ����������� 
	printf("yujin jun, %d", num);

	return 0;
}