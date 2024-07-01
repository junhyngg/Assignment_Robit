#include <stdio.h>

int main()
{
	int year;

	printf("년도를 입력하세요 : ");
	scanf_s("%d", &year);

	if (year % 4 == 0) // 연도가 4의 배수인지 확인 
	{
		if (year % 100 == 0) // 4의 배수이면서 100의 배수인지 확인
		{
			if (year % 400 == 0) // 4와 100 배수이며, 400의 배수인지 확인
			{
				printf("윤년");
			}
			else // 4와 100의 배수이나 400의 배수가 아닐 경우
			{
				printf("윤년이 아님");
			}
		}
		else // 4의 배수이며 100의 배수가 아닐 경우
		{
			printf("윤년");
		}
	}
	else // 4의 배수가 아닐 경우
	{
		printf("운년이 아님");
	}
	return 0;
}