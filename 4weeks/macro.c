//int형 변수를 식별자 규칙에 맞추어 원하는 이름으로 선언, 원하는 값으로 초기화하고 printf 함수를 사용하여 출력합니다.
//char형 변수를 식별자 규칙에 맞추어 원하는 이름으로 선언, 원하는 값으로 초기화하고 printf 함수를 사용하여 출력합니다.
//double형 변수를 식별자 규칙에 맞추어 원하는 이름으로 선언, 원하는 값으로 초기화하고 printf 함수를 사용하여 출력합니다.
//매크로 상수를 원하는 이름으로 정의, 원하는 값을 넣은 후 printf 함수를 사용하여 출력합니다.
//const 변수를 원하는 이름으로 선언, 원하는 값으로 초기화하고 printf 함수를 사용하여 출력합니다.

#define num1 4.3//define 변수명 값
#include <stdio.h>
 int main()
{	
	int num = 2;
	printf("%d\n",num);
	char ch = "hi";
	printf("%c\n", ch);
	double riri = 3.14;
	printf("%f\n", riri);
	printf("%f\n", num1);
	const int num2 = 432;
	printf("%d\n", num2);
	return 0;
}