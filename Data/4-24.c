#include <stdio.h>

int main(void) {
    int num;

    printf("ピラミッドを作ります。\n");
    printf("何段ですか：");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= num - i; j++) {
            printf(" ");
        }
        int keisan = (i - 1) * 2 + 1;
        for(int j = 1; j <= keisan; j++) {
            printf("*");
        }
        printf("\n");
    }
    return (0);
}
