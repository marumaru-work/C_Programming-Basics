#include <stdio.h>

int main(void) {
    int a, b, count;

    printf("正の整数を入力してください：");
    scanf("%d", &a);

    printf("%dは", a);

    while(a > 0) { // 10%10=0; 10/10=1; 1%10=1
        b = a % 10;
        a /= 10;
        count++;
    }
    printf("%d桁です。\n", count);

    return (0);
}
