#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num1, num2, p, sum = 0, min = 0, div = 0, mul = 0;
	double power = 1;
	char cal;

	printf("input Arithmetic Operation\n");
	printf("ex)  3.4 * 8.5\n     2.9 - 5.4\n     3.9 * 8.0\n     3.9^8\n");

	printf("input : ");
	scanf("%lf %c %lf", &num1, &cal, &num2); // �����ڴ� c�� ���� �Է�

	if (cal == '+') // �Է¹��� �����ڰ� + �� ���
	{
		sum = num1 + num2;
		printf("%.2lf + %.2lf = %.2lf", num1, num2, sum);

	}
	else if (cal == '-') // �Է¹��� �����ڰ� - �� ���
	{
		min = num1 - num2;
		printf("%.2lf - %.2lf = %.2lf", num1, num2, min);
	}
	else if (cal == '/') // �Է¹��� �����ڰ� / �� ���
	{
		if (num2 != 0) // �и� 0�� �ƴ� ��� ���������� ���
		{
			div = num1 / num2;
			printf("%.2lf / %.2lf = %.2lf", num1, num2, div); 
		}
		else // �и� 0�� ��� ���Է�
		{
			printf("wrong input. try again");
		}
	}
	else if (cal =='*') // �Է¹��� �����ڰ� * �� ���
	{
		mul = num1 * num2;
		printf("%.2lf * %.2lf = %.2lf", num1, num2, mul);
	}
	else if (cal == '^') // �Է¹��� �����ڰ� ^ �� ���
	{
		for (p = 1; p <= num2; p++) // ������ ���� p�� num2�� ũ��� ������ ������ ����
		{
			power = power * num1; // ���� �����ñ��� �ݺ�
		}
		printf("%.2lf ^ %.2lf = %.2lf", num1, num2, power);
	}
	else
	{
		printf("wrong input. try again"); // �����ڰ� ���� ������ ���� �� ���Է�
	}
	
	return 0;
}