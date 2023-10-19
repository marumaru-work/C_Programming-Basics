//左上側直角三角形
#include <stdio.h>

int main(void) {
    int i, j, len;

    printf("左上直角二等辺三角形を作ります。\n");
    printf("短辺：");
    scanf("%d", &len);

    for(i = len; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return (0);
}
