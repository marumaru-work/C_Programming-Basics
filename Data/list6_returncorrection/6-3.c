#include <stdio.h>

int cube(int x) { return (x * x * x); }

int main(void) {
    int x;

    printf("整数を入力してください：");
    scanf("%d", &x);

    printf("整数%dの3乗は%dです。\n", x, cube(x));
    return (0);
}
