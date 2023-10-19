#include <stdio.h>

int sumup(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return (sum);
}

int main(void) {
    int num;
    printf("1からnまでの全整数の和を求めます。\n");
    do {
        printf("整数n：");
        scanf("%d", &num);
        if(num < 1) {
            printf("\a負の値、または0は無効です。\n");
        }
    } while(num < 1);

    printf("1から%dまでの全整数の和は%dです。", num, sumup(num));
    return (0);
}
