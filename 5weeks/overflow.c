//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%c 문자의 ASCII코드: %d(%x)\n", ch, ch, ch);
//
//	return 0;
//}

//16진수 0x64, 10진수 100, 8진수 0144, 2진수 0b01100100을 printf 함수를 사용하여 10진수로 출력하여 모두 100이 나오는지 확인합니다.
//char형 변수 ch를 선언, '+'로 초기화하고, printf 함수를 사용하여 문자, 10진수, 16진수로 출력하여 + 43 2b가 나오는지 확인합니다.
//int형과 unsigned int형의 오버플로우를 확인해봅니다.int형 변수 num1, num2를 선언하고  INT_MAX, INT_MIN으로 초기화한 후, printf 함수를 사용하여 num1 + 1과 num2 - 1을 각각 % d(decimal)로 출력, unsigned형 변수 num3, num4를 선언하고 UINT_MAX, 0으로 초기화한 후, printf 함수를 사용하여 num3 + 1과 num4 - 1을 각각 % u(unsigned decimal)로 출력하여, -2147483648 2147483647 0 4294967295가 나오는지 확인합니다.
//double형 변수 d1, d2를 선언하고 1.7e308, 1.7e-308로 초기화한 후, % e(scientific)와% f로 printf 함수를 사용하여 출력하여 1.700000e+308 1.700000e-308 169999999999999993883079578865998174333346074304075874502773119193537729178160565864330091787584707988572262467983188919169916105593357174268369962062473635296474636515660464935663040684957844303524367815028553272712298986386310828644513212353921123253311675499856875650512437415429217994623324794855339589632.000000 0.000000가 나오는지 확인합니다.
//위에서 사용한 변수 중에서 ch, num1, num3, d1을 sizeof 연산자를 이용하여 크기를 출력해봅니다.
#include<stdio.h>
#include<limits.h>
int main()
{   //1번
	printf("%d\n", 0x64);
	printf("%d\n", 100);
	printf("%d\n", 0144);
	printf("%d\n", 0b01100100);
	
	//2번
	char ch = '+';
	printf("%ch %d %x\n", ch,ch,ch);//ch = ASCII코드 존재->10진수,16진수가능

	//3번
	int num1 = INT_MAX, num2 = INT_MIN;

	printf("num1 + 1= %d\n", num1 + 1);
	printf("num2 - 1= %d\n", num2 - 1);

	unsigned int num3 = UINT_MAX, num4 = 0;
	printf("num3 + 1= %u\n", num3 + 1);
	printf("num4 - 1= %u\n", num4 - 1);

	//4번
	double d1 = 1.7e308, d2 = 1.7e-308;
	printf(" % e, % f\n", d1, d2);

	//5번
	sizeof ch, num1, num3, d1;
	printf("%d,%d,%d,%d\n", ch, num1, num3, d1);

		return 0;
}