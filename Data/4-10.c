#include <stdio.h>

int main(void) {
    int a;

    printf("正の整数：");
    scanf("%d", &a);

    for(int i = 0; i < a; i++) {
        printf("*\n");
    }

    return (0);
}
