//프로그램 맨 위에 주석으로 본인의 학번과 이름을 넣습니다.
//정수형 변수 num을 선언하고 0으로 초기화 합니다.
//printf함수를 이용하여 "Enter an integer: "를 출력합니다.
//scanf함수를 이용하여 정수를 입력받아 num에 저장합니다.
//printf함수를 이용하여 입력받은 num을 출력합니다.


//2116020 전유진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{	int num = 0;
	printf("enter an integer: \n");
	scanf("%d", &num);
	printf("%d", num);

	return 0;
}