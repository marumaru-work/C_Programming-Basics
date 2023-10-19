#include <stdio.h>

int main(void) {
    int num;

    printf("正方形を作ります。\n");
    printf("何段ですか：");
    scanf("%d", &num);

    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++) {
            printf("*");
        }
        printf("\n");
    }

    return (0);
}
