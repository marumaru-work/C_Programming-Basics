#include <stdio.h>

int main(void)
{
    int num, start = 0;
    printf("値を入力してください：");
    scanf("%d", &num);

    printf("結果：");
    for (int i = 1; i <= num; i++)
    {
        if (i % 3 == 0 || i % 5 == 0) // (A || B) =　AまたはB, (A && B)　=　AかつB
        //if (i ÷ 3 = ◯ 余り0 または i ÷ 5 = ◯ 余り0) が真ならば、if文の中身を実行
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return (0);
}

/*実行結果
値を入力してください：25
結果：3 5 6 9 10 12 15 18 20 21 24 25
*/