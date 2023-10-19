#include <stdio.h>

int main(void) {
    int a, count = 0;

    printf("整数値：");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        int data = i + 1;
        if (a % data == 0)
        {
            printf("%d\n", data);
            count++;
        }
    }
    printf("約数は%d個です。\n", count);

    return (0);
}
