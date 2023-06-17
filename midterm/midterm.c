#include <stdio.h>
int main()
{
	//세금(tax)=소득(income)*소득세율(rate)
	
	/*1. 소득 입력 받기 (10점)
	소득을 int 변수, 이름은 income으로 선언하고, 0으로 초기
		화합니다.income을 scanf()로 읽어 들입니다.income 값
		을 printf()로 출력합니다.*/

	int income = 0;
	scanf("%d", &income);
	printf("%d\n", income);

	/*2. 소득에 따라 등급 구하기(20점)
		등급을 char 변수, 이름은 grade로 선언하고, '0'으로 초 기화합니다.소득기준으로 income 값에 따라 grade에
		'A'~'G'를 할당하는데 이를 if / else if / else 구문으로 구
		현하세요.income이 0보다 작거나 같을 때는 "Income
		error!"를 출력합니다. grade 값을 printf()로 출력합니다.*/
	
	char grade = 0;
	if (grade <= 0)
		printf("Income error!");

	else if (grade <= 12000000)
		grade = 'A';


	else if (grade <= 46000000)
		grade = 'B';


	else if (grade <= 88000000)
		grade = 'C';


	else if (grade <= 150000000)
		grade = 'D';

	else if (grade <= 300000000)
		grade = 'E';

	else if (grade <= 500000000)
		grade = 'F';

	else if (grade > 500000000)
		grade = 'G';


	printf("grade %c\n", grade);
	
	//3. 등급에 따라 세율 구하기(20점)
	//	세율을 double 변수, 이름은 rate로 선언하고, 0.0으로 초
	//	기화합니다. switch 구문을 이용하여 grade 값에 따라 소득
	//	세율 rate에 값을 할당합니다.switch구문의 default는
	//	"Grade error!"를 출력합니다.

	double rate = 0.0;
	switch()

	return 0;
}