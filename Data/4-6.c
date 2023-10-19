#include <stdio.h>

int main(void) {
    int a;

    printf("正の整数を入力してください：");
    scanf("%d", &a);

    int i = 2;
    while(i <= a) {
        printf("%d ", i);
        i += 2;
    }
    putchar('\n');

    return (0);
}
