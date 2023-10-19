#include <stdio.h>

int main(void) {
    int a;

    printf("整数値：");
    scanf("%d", &a);

    for (int i = 1; i <= a; i += 2)
    {
        printf("%d ", i);
    }

    return (0);
}
