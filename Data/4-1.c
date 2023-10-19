#include <stdio.h>

int main(void) {
    int no, retry;

    do {
        printf("整数を入力してください：");
        scanf("%d", &no);

        if(no == 0) {
            printf("その数は0です。\n");
        } else if(no > 0) {
            printf("その数は正です。\n");
        } else {
            printf("その数は負です。\n");
        }

        printf("まだ入力しますか？<Yes:0/No:9>：");
        scanf("%d", &retry);
    } while(retry == 0);

    return (0);
}
