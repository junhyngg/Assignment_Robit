#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, i, j;

	printf("���� �Է��ϼ���.  ");
	scanf("%d", &num);

	for (i = 0; i < num; i++) // i=0�������� �Է°����� �������� �ݺ�
	{
		for (j = 1; j <= i; j++) // �� �κ� �׸���, �»�� ����
		{
			printf("*");
		}
		for (j = ((num * 2) - 1); j > ((i * 2) - 1); j--) // *�� ä���� �ʴ� ������ �������� ä��
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++) // ���� ����
		{
			printf("*");
		}
		printf("\n"); // �� ����
	}
	for (i = 1; i <= num; i++) // i=1�������� �Է°��� ������ ������ �ݺ�, ��� �㸮 �κ� ��� ����
	{
		for (j = num; j >= i; j--) // �Ʒ� �κ� �׸���, ���ϴ� ����
		{
			printf("*");
		}
		for (j = 1; j <(( 2 * i) - 1); j++) // *�� ä���� �ʴ� ������ �������� ä��
		{
			printf(" ");
		}
		for (j = num; j >= i; j--) // ���ϴ� ����
		{
			printf("*");
		}
		printf("\n"); // �� ����
	}
	return 0;
}

