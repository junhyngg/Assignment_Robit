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
	scanf("%lf %c %lf", &num1, &cal, &num2); // 연산자는 c를 통해 입력

	if (cal == '+') // 입력받은 연산자가 + 일 경우
	{
		sum = num1 + num2;
		printf("%.2lf + %.2lf = %.2lf", num1, num2, sum);

	}
	else if (cal == '-') // 입력받은 연산자가 - 일 경우
	{
		min = num1 - num2;
		printf("%.2lf - %.2lf = %.2lf", num1, num2, min);
	}
	else if (cal == '/') // 입력받은 연산자가 / 일 경우
	{
		if (num2 != 0) // 분모가 0이 아닐 경우 정상적으로 계산
		{
			div = num1 / num2;
			printf("%.2lf / %.2lf = %.2lf", num1, num2, div); 
		}
		else // 분모가 0일 경우 재입력
		{
			printf("wrong input. try again");
		}
	}
	else if (cal =='*') // 입력받은 연산자가 * 일 경우
	{
		mul = num1 * num2;
		printf("%.2lf * %.2lf = %.2lf", num1, num2, mul);
	}
	else if (cal == '^') // 입력받은 연산자가 ^ 일 경우
	{
		for (p = 1; p <= num2; p++) // 임의의 변수 p가 num2의 크기와 같아질 때까지 증가
		{
			power = power * num1; // 조건 충족시까지 반복
		}
		printf("%.2lf ^ %.2lf = %.2lf", num1, num2, power);
	}
	else
	{
		printf("wrong input. try again"); // 연산자가 위에 속하지 않을 시 재입력
	}
	
	return 0;
}