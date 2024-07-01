#define _CRT_SECURE_NO_WARNINGS
#include < stdio.h>

int main()
{
    int num, i, j, k=0;
    printf("값을 입력하세요.  ");
    scanf("%d", &num);

    
    for (i = 1; i < num; i++) // 삼각형 높이 결정
    {
        for (j = i; j < num; j++)
        {
            printf(" ");
        }
        while (k != ((2 * i) - 1)) // k의 값이 (2*i)-1이 아닌 동안 아래 행위 반복
        {
            if (k == 0 || k == ((2 * i) - 2)) // k값이 0이거나 k값이 (2*i)-2일 경우
                printf("*"); // *을 쌓음
            else
                printf(" "); // 그렇지 않으면 공백으로 남김
            k++; // 일련의 행동 마무리 후 k값 증가
            ;
        }
        k = 0; // k값 초기화
        printf("\n");
    }
    for (i = 0; i < ((2 * num) - 1); i++) // 삼각형의 밑변 출력
    {
        printf("*");
    }

    printf("\n"); // 줄 변경
    return 0;
}