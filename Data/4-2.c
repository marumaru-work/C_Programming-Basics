#include <stdio.h>

int main(void) {
    int a, b, c, sum;

    printf("二つの整数を入力してください。\n");
    printf("整数a：");
    scanf("%d", &a);
    printf("整数b：");
    scanf("%d", &b);

    if(a > b) { //もしbよりaの値のほうが大きければif文を実行する
        c = a; // cにaの値を代入
        a = b; // aにbの値を代入
        b = c; // bにcの値を代入
        // printf("%d, %d\n", a, b);
    }
    int a2;
    a2 = a; //変数a2にaの値を代入する（保存する）

    for(a = a; a <= b; a++) {
        sum += a; //合計値の計算
    }
    printf("%d以上%d以下の全整数の和は%dです。\n", a2, b, sum);
    return (0);
}
