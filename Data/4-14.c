#include <stdio.h>

int main(void)
{
    int a, cnt = 1;

    printf("正の整数を入力してください：");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        printf("%d", cnt);
        cnt++;
        if (cnt == 10)
        {
            cnt = 0;
        }
    }

    return (0);
}
