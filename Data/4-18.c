#include <stdio.h>

int main(void) {
    int a ,count = 0;

    printf("何個*を表示しますか：");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        count++;
        putchar('*');
        if (count % 5 == 0)
        {
            putchar('\n');
        }
    }

    return (0);
}
