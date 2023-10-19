#include <stdio.h>

int main(void) {
    int i, j;
    int height, width;

    printf("長方形を作ります。\n");
    printf("高さ：");
    scanf("%d", &height);
    printf("横幅：");
    scanf("%d", &width);

    for(i = 1; i <= height; i++) {
        for(j = 1; j <= width; j++) {
            printf("*");
        }
        printf("\n");
    }

    return (0);
}
