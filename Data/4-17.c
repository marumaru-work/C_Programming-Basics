#include <stdio.h>

int main(void) {
    int a;

    printf("nの値：");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        int b = i + 1;
        printf("%dの2乗は%d\n", b, b*b);
    }

    return (0);
}
