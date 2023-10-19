#include <stdio.h>

int pow4(int x) { return (x * x * x * x); }

int main(void) {
    int n;

    printf("整数を入力してください：");
    scanf("%d", &n);

    printf("整数%dの4乗は%dです。\n", n, pow4(n));
    return (0);
}
