//short��, unsigned short�� �����÷ο� Ȯ��
#include <stdio.h>
#include <limits.h>
//int main()
//{
//	short num1 = 32767;
//	short num2 = -32767;
//	unsigned short num3 = 65535;
//	unsigned short num4 = 0;
//
//	num1 = num1 + 1;
//	num2 = num2 - 1;
//	num3 = num3 + 1;
//	num4 = num4 - 1;
//
//	printf("num1 = %d\n", num1);
//	printf("num2 = %d\n", num2);
//	printf("num3 = %d\n", num3);
//	printf("num4 = %d\n", num4);
//
//	//sizeof ������
//	int size = 100;
//	sizeof 123;//sizeof ��
//	sizeof(100 + size);//sizeof (��)
//	sizeof(int);//sizeof (��������)
//
//	printf("123�� ����Ʈ ũ��: %d\n", sizeof 123);
//	printf("(100+size)�� ����Ʈ ũ��: %d\n", sizeof (100+size));
//	printf("int�� ����Ʈ ũ��: %d\n", sizeof (int));
//
//	return 0;
//}

//����
int main()
{
	printf("0x64:%d, 100:%d, 0144:%d, 0b01100100:%d\n", 0x64, 100, 0144, 0b01100100);
	char ch = '+';
	printf("����:%c,10����:%d,16����:%x\n", ch, ch, ch);
	int num1 = INT_MAX, num2=INT_MIN;//#include <limits.h>
	printf("num1+1: %d\n", num1 + 1);
	printf("num2-1: %d\n", num2 - 1);
	unsigned int num3 = UINT_MAX;
	unsigned int num4 = 0;
	printf("num3+1:%u\n", num3 + 1);	
	printf("num3+1:%u\n", num4 - 1);
	
	double d1 = 1.7e308;
	double d2 = 1.7e-308;
	printf("d1:%e\n", d1);
	printf("d2:%f\n", d2);
	
	printf("sizeof ch:%d", sizeof(ch));
	printf("sizeof num1:%d\n", sizeof(num1));
	printf("sizeof num3:%d", sizeof(num3));
	printf("sizeof d1:%d", sizeof(d1));


	//  ����; = 10����

	//	0x����; = 16����

	//	0���� = 8����

	//	0b���� = 2����







	return 0;
}