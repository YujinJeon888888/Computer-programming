//기호상수를 하나 선언하고 값을 100으로 초기화하세요.
//나누기연산자와 1번에서 선언한 기호상수를 이용하여 1234로 초기화한 정수 변수 allcents를 12 dollars로 나타내고 이를 출력하세요.
//나머지연산자와 1번에서 선언한 기호상수를 이용하여 allcents를 34 cents로 나타내고 이를 출력하세요.
//2번의 12 dollars를 관계연산자를 이용하여 0보다 큰지 아닌지를 출력해보세요.
//3번의 34 cents를 관계연산자와 논리연산자를 이용하여 0보다 크고 100보다 작은지를 출력해보세요.

#include <stdio.h>
int main(void)
{
	//1번
	const int num = 100;
	
	//2번
	int allcents = 1234;
	printf("dollars= %d\n", allcents / num);

	//3번
	printf("cents= %d\n", allcents % num);

	//4번
	printf("12 dollars>0 : %d\n", (allcents / num) > 0);

	//5번
	printf("0<34 cents<100 : %d\n", 0< allcents % num && allcents % num <100);
	
	return 0;
}