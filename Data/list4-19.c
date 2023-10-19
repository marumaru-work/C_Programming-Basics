#include <stdio.h>

int main(void) {
    int i, j, len;

    printf("右下直角二等辺三角形を作ります。\n");
    printf("短辺：");
    scanf("%d", &len);

    for(i = 1; i <= len; i++) {
        for(j = 1; j <= len - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return (0);
}
