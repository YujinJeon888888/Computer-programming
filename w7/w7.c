# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//대입 연산자 사용 예
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
//	num |= 3;//복합대입연산자
//	printf("num = %d\n", num);
//
//	num<<= 2;//복합대입연산자
//	printf("num = %d\n", num);
//
//	return 0;
//}

//조건연산자 사용 예
int main()
{
	int a, b;
	int min, max;

	printf("두 개의 정수를 입력하세요: \n");
	scanf("%d %d", &a, &b);

	min = a < b ? a : b;
	max = a > b ? a : b;

	printf("min= %d, max = %d\n", min, max);

	return 0;
}