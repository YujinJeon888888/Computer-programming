# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� ������ ��� ��
//int main()
//{
//	int num;
//	num = 5;
//	printf("num = %d\n", num);
//
//	num += 2;//num+2
//	printf("num = %d\n", num);
//
//	num *= 2;
//	printf("num = %d\n", num);
//
//	num |= 3;//���մ��Կ�����
//	printf("num = %d\n", num);
//
//	num<<= 2;//���մ��Կ�����
//	printf("num = %d\n", num);
//
//	return 0;
//}

//���ǿ����� ��� ��
int main()
{
	int a, b;
	int min, max;

	printf("�� ���� ������ �Է��ϼ���: \n");
	scanf("%d %d", &a, &b);

	min = a < b ? a : b;
	max = a > b ? a : b;

	printf("min= %d, max = %d\n", min, max);

	return 0;
}