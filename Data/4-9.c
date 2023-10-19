#include <stdio.h>

int main(void) {
    int a;

    printf("正の整数：");
    scanf("%d", &a);

    int bool;

    for(int i = 0; i < a; i++) {
        if(bool == 0) {
            printf("+");
            bool ++;
        } else {
            printf("-");
            bool --;
        }
    }

    return (0);
}
