#include <stdio.h>
int main()
{
	//����(tax)=�ҵ�(income)*�ҵ漼��(rate)
	
	/*1. �ҵ� �Է� �ޱ� (10��)
	�ҵ��� int ����, �̸��� income���� �����ϰ�, 0���� �ʱ�
		ȭ�մϴ�.income�� scanf()�� �о� ���Դϴ�.income ��
		�� printf()�� ����մϴ�.*/

	int income = 0;
	scanf("%d", &income);
	printf("%d\n", income);

	/*2. �ҵ濡 ���� ��� ���ϱ�(20��)
		����� char ����, �̸��� grade�� �����ϰ�, '0'���� �� ��ȭ�մϴ�.�ҵ�������� income ���� ���� grade��
		'A'~'G'�� �Ҵ��ϴµ� �̸� if / else if / else �������� ��
		���ϼ���.income�� 0���� �۰ų� ���� ���� "Income
		error!"�� ����մϴ�. grade ���� printf()�� ����մϴ�.*/
	
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
	
	//3. ��޿� ���� ���� ���ϱ�(20��)
	//	������ double ����, �̸��� rate�� �����ϰ�, 0.0���� ��
	//	��ȭ�մϴ�. switch ������ �̿��Ͽ� grade ���� ���� �ҵ�
	//	���� rate�� ���� �Ҵ��մϴ�.switch������ default��
	//	"Grade error!"�� ����մϴ�.

	double rate = 0.0;
	switch()

	return 0;
}