//���α׷� �� ���� �ּ����� ������ �й��� �̸��� �ֽ��ϴ�.
//������ ���� num�� �����ϰ� 0���� �ʱ�ȭ �մϴ�.
//printf�Լ��� �̿��Ͽ� "Enter an integer: "�� ����մϴ�.
//scanf�Լ��� �̿��Ͽ� ������ �Է¹޾� num�� �����մϴ�.
//printf�Լ��� �̿��Ͽ� �Է¹��� num�� ����մϴ�.


//2116020 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{	int num = 0;
	printf("enter an integer: \n");
	scanf("%d", &num);
	printf("%d", num);

	return 0;
}