// return の後に括弧をつけるのを忘れていたので、再提出させて頂きます。
#include <stdio.h>

int min2(int a, int b) {
    if(a < b) {
        return (a);
    } else {
        return (b);
    }
    /*return (a < b ? a : b)*/
}

int main(void) {
    int n1, n2;

    printf("二つの整数を入力してください。\n");
    printf("整数１：");
    scanf("%d", &n1);
    printf("整数２：");
    scanf("%d", &n2);
    printf("小さいほうの値は%dです。\n", min2(n1, n2));

    return (0);
}
