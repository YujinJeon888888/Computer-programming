#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//������ ������ ��� ��(��ǥ)
//int main()
//{
//	int num;
//	int thousands, tens;
//
//	printf("6�ڸ� ������ �Է��ϼ���: \n");
//	scanf("%d", &num);
//
//	thousands = num / 1000;
//	tens = num % 1000;
//	printf("%d,%d\n", thousands, tens);
//
//
//	return 0;
//}

//���迬����
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a =%d, b =%d\n", a, b);
//	printf("a>b =%d\n", a> b);//0:���� 1:Ʈ��
//	printf("a>=b =%d\n", a >= b);
//	printf("a<b =%d\n", a < b);
//	printf("a<=b =%d\n", a <= b);
//	printf("a==b =%d\n", a == b);
//	printf("a!=b =%d\n", a != b);//!=:�ƴϴ� ���迬����
//
//	return 0;
//}

//��������
//int main()
//{
//	int score = 95;
//	
//	printf("90�� �̻� 100�� �����ΰ�? : %d\n", score >= 90 && score <= 100);
//	printf("0�� �Ǵ� 100���ΰ�? : %d\n", score == 0 || score == 100);
//	printf("0���ΰ�? : %d\n", !score);
//
//			
//
//	return 0;
//}

//��Ʈ������
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

//����
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


