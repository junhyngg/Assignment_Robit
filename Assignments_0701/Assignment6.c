#define _CRT_SECURE_NO_WARNINGS
#include < stdio.h>

int main()
{
    int num, i, j, k=0;
    printf("���� �Է��ϼ���.  ");
    scanf("%d", &num);

    
    for (i = 1; i < num; i++) // �ﰢ�� ���� ����
    {
        for (j = i; j < num; j++)
        {
            printf(" ");
        }
        while (k != ((2 * i) - 1)) // k�� ���� (2*i)-1�� �ƴ� ���� �Ʒ� ���� �ݺ�
        {
            if (k == 0 || k == ((2 * i) - 2)) // k���� 0�̰ų� k���� (2*i)-2�� ���
                printf("*"); // *�� ����
            else
                printf(" "); // �׷��� ������ �������� ����
            k++; // �Ϸ��� �ൿ ������ �� k�� ����
            ;
        }
        k = 0; // k�� �ʱ�ȭ
        printf("\n");
    }
    for (i = 0; i < ((2 * num) - 1); i++) // �ﰢ���� �غ� ���
    {
        printf("*");
    }

    printf("\n"); // �� ����
    return 0;
}