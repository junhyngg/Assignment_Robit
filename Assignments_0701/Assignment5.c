#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, i, j;

	printf("값을 입력하세요.  ");
	scanf("%d", &num);

	for (i = 0; i < num; i++) // i=0에서부터 입력값보다 작을동안 반복
	{
		for (j = 1; j <= i; j++) // 윗 부분 그리기, 좌상단 리본
		{
			printf("*");
		}
		for (j = ((num * 2) - 1); j > ((i * 2) - 1); j--) // *을 채우지 않는 공간을 공백으로 채움
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++) // 우상단 리본
		{
			printf("*");
		}
		printf("\n"); // 줄 변경
	}
	for (i = 1; i <= num; i++) // i=1에서부터 입력값과 같아질 때까지 반복, 가운데 허리 부분 출력 포함
	{
		for (j = num; j >= i; j--) // 아랫 부분 그리기, 좌하단 리본
		{
			printf("*");
		}
		for (j = 1; j <(( 2 * i) - 1); j++) // *을 채우지 않는 공간을 공백으로 채움
		{
			printf(" ");
		}
		for (j = num; j >= i; j--) // 우하단 리본
		{
			printf("*");
		}
		printf("\n"); // 줄 변경
	}
	return 0;
}

