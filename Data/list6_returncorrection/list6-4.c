#include <stdio.h>

int max2(int a, int b) { return ((a > b) ? a : b); }

int max4(int a, int b, int c, int d) { return (max2(max2(a, b), max2(c, d))); }

int main(void) {
    int n1, n2, n3, n4;

    printf("四つの整数を入力してください。\n");
    printf("整数n１：");
    scanf("%d", &n1);
    printf("整数n２：");
    scanf("%d", &n2);
    printf("整数n３：");
    scanf("%d", &n3);
    printf("整数n４：");
    scanf("%d", &n4);

    printf("最も大きい値は%dです。\n", max4(n1, n2, n3, n4));
    return (0);
}