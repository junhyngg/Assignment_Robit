#include <stdio.h>

int main()
{
	double num1, num2, num3, num4, num5;
	double avg, min = 0, max = 0;

	printf("\n1 ��° ���ڸ� �Է��Ͻÿ�.  "); // ���ڸ� �Է¹޴´�.
	scanf_s("%lf", &num1);
	printf("\n2 ��° ���ڸ� �Է��Ͻÿ�.  ");
	scanf_s("%lf", &num2);
	printf("\n3 ��° ���ڸ� �Է��Ͻÿ�.  ");
	scanf_s("%lf", &num3);
	printf("\n4 ��° ���ڸ� �Է��Ͻÿ�.  ");
	scanf_s("%lf", &num4);
	printf("\n5 ��° ���ڸ� �Է��Ͻÿ�.  ");
	scanf_s("%lf", &num5);


	avg = (num1 + num2 + num3 + num4 + num5) / 5;
	printf("\n����� % lf�Դϴ�.", avg);

	if (num1 < num2) // num1�� num2�� ���� �ּڰ� min�� �ִ� max�� �����Ѵ�.
	{
		max = num2;
		min = num1;
	}
	else
	{
		max = num1;
		min = num2;
	}
	if (max < num3) // ��� �������� ������ min/max���� �Է¹��� ���� ���Ѵ�.
	{
		max = num3;
	}
	else if (num3 < min)
	{
		min = num3;
	}
	if (max < num4)
	{
		max = num4;
	}
	else if (num4 < min)
	{
		min = num4;
	}
	if (max < num5)
	{
		max = num5;
	}
	else if (num5 < min)
	{
		min = num5;
	}
	printf("\n�ִ��� %lf�Դϴ�.", max); // �� ����� ����Ѵ�.
	printf("\n�ּڰ��� %lf�Դϴ�.", min);

	return 0;
}