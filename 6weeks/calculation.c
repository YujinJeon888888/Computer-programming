//��ȣ����� �ϳ� �����ϰ� ���� 100���� �ʱ�ȭ�ϼ���.
//�����⿬���ڿ� 1������ ������ ��ȣ����� �̿��Ͽ� 1234�� �ʱ�ȭ�� ���� ���� allcents�� 12 dollars�� ��Ÿ���� �̸� ����ϼ���.
//�����������ڿ� 1������ ������ ��ȣ����� �̿��Ͽ� allcents�� 34 cents�� ��Ÿ���� �̸� ����ϼ���.
//2���� 12 dollars�� ���迬���ڸ� �̿��Ͽ� 0���� ū�� �ƴ����� ����غ�����.
//3���� 34 cents�� ���迬���ڿ� �������ڸ� �̿��Ͽ� 0���� ũ�� 100���� �������� ����غ�����.

#include <stdio.h>
int main(void)
{
	//1��
	const int num = 100;
	
	//2��
	int allcents = 1234;
	printf("dollars= %d\n", allcents / num);

	//3��
	printf("cents= %d\n", allcents % num);

	//4��
	printf("12 dollars>0 : %d\n", (allcents / num) > 0);

	//5��
	printf("0<34 cents<100 : %d\n", 0< allcents % num && allcents % num <100);
	
	return 0;
}