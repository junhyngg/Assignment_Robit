#include <stdio.h>

int main()
{
	int fibo1 = 0, fibo2 = 1, fibo3, i,num;

	printf("숫자를 입럭하시오 : ");
	scanf_s("%d", &num);

	
	if (num == 1) // 첫번째 피보나치 수는 0이므로 for문 밖에서 예외처리한다.
	{
		printf("1번째 피보나치 수는 0입니다.\n");
	}
	else if (num == 2) // 두번쨰 피보나치 수는 1이므로 for문 밖에서 예외처리한다.
	{
		printf("2번째 피보나치 수는 1입니다.\n");
	}

	if (num > 3) // 3이상의 수 대상으로 피보나치 수 계산
	{
		for (i = 0; i < (num - 2); i++)
		{
			fibo3 = fibo1 + fibo2; // 앞의 두 수의 합이 피보나치 수가 된다.

			fibo1 = fibo2; // 두번째 자리의 있던 수를 첫째 자리로
			fibo2 = fibo3; // 세번째 자리의 수를 둘째 자리로
		}
	}
	
	printf("%d번째 피보나치 수는 %d입니다.\n", num, fibo3); // 한 번만 출력하기 위해 for문 밖에서 출력한다.

	return 0;
}