//구축한 프로그래밍 환경에서
//printf() 함수를 이용하여 본인의 학번과 이름을 출력해보세요!
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num = 0;
	printf("enter your school number: \n");
	scanf(" %d", &num);//scanf 함수= scanf("%~형", &변수명); , 에러 해결: 디버깅하고 나오는 문장 맨 처음에 정의,int도 미리 선언해줘야함 
	printf("yujin jun, %d", num);

	return 0;
}