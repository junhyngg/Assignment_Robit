#define _CRT_SECURE_NO_WARNINGS
#include < stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	int n1, t, n2, pR, cR1, cR2;
	double num1Fact = 1, num2Fact = 1, totalFact = 1, Fact = 1, Fact2 = 1; //������� num1!, num2!, (num1-num2)!, (num1+num2-1)!, (num1-1)!
	double permuRepeat = 1, combination = 1, comRepeat = 1;

	printf("�� ���ڸ� �Է��Ͻÿ�.  ");
	scanf("%d %d", &num1, &num2);

	for (n1 = num1; n1 >=1; n1--) // num1�� ���丮���� ��
	{
		num1Fact = num1Fact*n1; 
	}
	for (n2 = num2; n2 >= 1; n2--) // num2�� ���丮���� ��
	{
		num2Fact = num2Fact * n2;
	}
	for (t = (num1 - num2); t >= 1; t--) // (num1-num2)�� ���丮���� ��
	{
		totalFact = totalFact * t;
	}

	printf("���� ��갪 : %.2lf \n", num1Fact/totalFact); // ����(permutation)�� ��

	for (pR = 1; pR <= num2; pR++) // ���� p�� num2 ũ��� ������ ������ ����
	{
		permuRepeat = permuRepeat * num1; // ���� �����ñ��� �ݺ�
	}
	printf("�ߺ� ���� ��갪 : %.2lf \n", permuRepeat); // �ߺ������� ��

	combination = num1Fact / (totalFact * num2Fact);
	printf("���� ��갪 : %.2lf \n", combination);

	for (cR1 = (num1+num2-1); cR1 >= 1; cR1--) // (num1+num2-1)�� ���丮���� ��
	{
		Fact = Fact * cR1;
	}
	for (cR2 = (num1 - 1); cR2 >= 1; cR2--) // (num1+1)�� ���丮���� ��
	{
		Fact2 = Fact2 * cR2;
	}

	comRepeat = Fact / (Fact2 * num2Fact);

	printf("�ߺ� ���� ��갪 : %lf", comRepeat);

	return 0;
}