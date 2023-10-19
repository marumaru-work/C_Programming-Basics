#include <stdio.h>

int main(void){

    int a, b, c;
    double d;

    printf("何cmから：");
    scanf("%d", &a);
    printf("何cmまで：");
    scanf("%d", &b);
    printf("何cmごと：");
    scanf("%d", &c);

    for (int i = a; i <= b; i += c)
    {
        d = (i - 100) * 0.9;
        printf("%dcm  %.2fkg\n", i, d);
    }

    return (0);
}