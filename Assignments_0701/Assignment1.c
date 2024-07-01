#include <stdio.h>

int main()
{
	double num1, num2, num3, num4, num5;
	double avg, min = 0, max = 0;

	printf("\n1 번째 숫자를 입력하시오.  "); // 숫자를 입력받는다.
	scanf_s("%lf", &num1);
	printf("\n2 번째 숫자를 입력하시오.  ");
	scanf_s("%lf", &num2);
	printf("\n3 번째 숫자를 입력하시오.  ");
	scanf_s("%lf", &num3);
	printf("\n4 번째 숫자를 입력하시오.  ");
	scanf_s("%lf", &num4);
	printf("\n5 번째 숫자를 입력하시오.  ");
	scanf_s("%lf", &num5);


	avg = (num1 + num2 + num3 + num4 + num5) / 5;
	printf("\n평균은 % lf입니다.", avg);

	if (num1 < num2) // num1과 num2를 비교해 최솟값 min과 최댓값 max를 설정한다.
	{
		max = num2;
		min = num1;
	}
	else
	{
		max = num1;
		min = num2;
	}
	if (max < num3) // 상기 과정으로 설정한 min/max값을 입력받은 값과 비교한다.
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
	printf("\n최댓값은 %lf입니다.", max); // 비교 결과를 출력한다.
	printf("\n최솟값은 %lf입니다.", min);

	return 0;
}