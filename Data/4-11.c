#include <stdio.h>

int main(void) {
    int a, b;

    printf("正の整数を入力してください：");
    scanf("%d", &a);

    printf("%dを逆から読むと", a);

    while(a > 0) {
        b = a % 10;
        printf("%d", b);
        a /= 10;
    }
    putchar('\n');

    return (0);
}
