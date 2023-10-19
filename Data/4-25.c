#include <stdio.h>

int main(void) {
    int num;

    printf("下向き数字ピラミッドを作ります。\n");
    printf("何段ですか：");
    scanf("%d", &num);

    int count = 1;
    for(int i = num; i >= 1; i--)
    {
        for(int j = 1; j <= count - 1; j++)
        {
            printf(" ");
        }
        count++;
        int keisan = (i - 1) * 2 + 1;
        for(int j = 1; j <= keisan; j++) {
            printf("*");
        }
        printf("\n");
    }

    return (0);
}
