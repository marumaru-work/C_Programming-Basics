#include <stdio.h>

int main(void) {
    int i, j;
    int height, width;

    printf("長方形を作ります。\n");
    printf("一辺（その１）：");
    scanf("%d", &width);
    printf("二辺（その２）：");
    scanf("%d", &height);

    for(i = 1; i <= height; i++) {
        for(j = 1; j <= width; j++) {
            printf("*");
        }
        printf("\n");
    }

    return (0);
}
