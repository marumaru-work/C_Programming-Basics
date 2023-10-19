#include <stdio.h>

int main(void)
{
    int a, sum = 0;

    printf("nの値：");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        sum += i + 1;
    }
    printf("1から%dまでの和は%dです。", a, sum);

    return (0);
}