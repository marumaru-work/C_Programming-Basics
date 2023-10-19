#include <stdio.h>

int main(void) {
    int no;

    do {
        printf("正の整数を入力してください：");
        scanf("%d", &no);
        if(no <= 0) {
            printf("\a正でない数を入力しないでください。\n");
        }
    } while(no <= 0);

    printf("その数を逆から読むと");
    while(no > 0) {
        printf("%d", no % 10);
        no /= 10;
    }
    printf("です。\n");

    return (0);
}
