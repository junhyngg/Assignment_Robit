#define _CRT_SECURE_NO_WARNINGS
#include < stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	int n1, t, n2, pR, cR1, cR2;
	double num1Fact = 1, num2Fact = 1, totalFact = 1, Fact = 1, Fact2 = 1; //순서대로 num1!, num2!, (num1-num2)!, (num1+num2-1)!, (num1-1)!
	double permuRepeat = 1, combination = 1, comRepeat = 1;

	printf("두 숫자를 입력하시오.  ");
	scanf("%d %d", &num1, &num2);

	for (n1 = num1; n1 >=1; n1--) // num1의 팩토리얼의 값
	{
		num1Fact = num1Fact*n1; 
	}
	for (n2 = num2; n2 >= 1; n2--) // num2의 팩토리얼의 값
	{
		num2Fact = num2Fact * n2;
	}
	for (t = (num1 - num2); t >= 1; t--) // (num1-num2)의 팩토리얼의 값
	{
		totalFact = totalFact * t;
	}

	printf("순열 계산값 : %.2lf \n", num1Fact/totalFact); // 순열(permutation)의 값

	for (pR = 1; pR <= num2; pR++) // 변수 p가 num2 크기와 같아질 때까지 증가
	{
		permuRepeat = permuRepeat * num1; // 조건 충족시까지 반복
	}
	printf("중복 순열 계산값 : %.2lf \n", permuRepeat); // 중복순열의 값

	combination = num1Fact / (totalFact * num2Fact);
	printf("조합 계산값 : %.2lf \n", combination);

	for (cR1 = (num1+num2-1); cR1 >= 1; cR1--) // (num1+num2-1)의 팩토리얼의 값
	{
		Fact = Fact * cR1;
	}
	for (cR2 = (num1 - 1); cR2 >= 1; cR2--) // (num1+1)의 팩토리얼의 값
	{
		Fact2 = Fact2 * cR2;
	}

	comRepeat = Fact / (Fact2 * num2Fact);

	printf("중복 조합 계산값 : %lf", comRepeat);

	return 0;
}