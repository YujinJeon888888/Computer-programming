#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//나머지 연산자 사용 예(쉼표)
//int main()
//{
//	int num;
//	int thousands, tens;
//
//	printf("6자리 정수를 입력하세요: \n");
//	scanf("%d", &num);
//
//	thousands = num / 1000;
//	tens = num % 1000;
//	printf("%d,%d\n", thousands, tens);
//
//
//	return 0;
//}

//관계연산자
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a =%d, b =%d\n", a, b);
//	printf("a>b =%d\n", a> b);//0:거짓 1:트루
//	printf("a>=b =%d\n", a >= b);
//	printf("a<b =%d\n", a < b);
//	printf("a<=b =%d\n", a <= b);
//	printf("a==b =%d\n", a == b);
//	printf("a!=b =%d\n", a != b);//!=:아니다 관계연산자
//
//	return 0;
//}

//논리연산자
//int main()
//{
//	int score = 95;
//	
//	printf("90점 이상 100점 이하인가? : %d\n", score >= 90 && score <= 100);
//	printf("0점 또는 100점인가? : %d\n", score == 0 || score == 100);
//	printf("0점인가? : %d\n", !score);
//
//			
//
//	return 0;
//}

//비트연산자
//int main()
//{
//	int a = 10;
//	int b = 12;
//	int c;
//
//	c = a & b;
//	printf("a&b = %08x(%d)\n", c, c);
//
//	c = a | b;
//	printf("a|b = %08x(%d)\n", c, c);
//	
//	c = a ^ b;
//	printf("a^b = %08x(%d)\n", c, c);
//
//	c = ~a;
//	printf("~a = %08x(%d)\n", c, c);
//
//	return 0;
//}

//숙제
int main()
{
	const int num = 100;
	int allcents = 1234;
	
	printf("%d dollars\n", allcents / num);
	printf("%d cents\n", allcents%num);

	printf("12 dollars>0 : %d\n", allcents / num > 0);
	printf("34 cents>0 && 34 cents<100 : %d\n", allcents % num > 0 && allcents % num<100);



	return 0;
}


