#include <stdio.h>

int main(void) {
    int i, j;

    printf("  |", i);
    for(int i = 1; i <= 9; ++i) {
        printf("%3d", i);
    }
    printf("\n");

    printf("--+");
    for(j = 1; j <= 9; ++j) {
        printf("---");
    }
    printf("\n");
    for(i = 1; i <= 9; ++i) {
        printf("%d |", i);
        for(j = 1; j <= 9; ++j) {
            printf("%3d", i * j);
        }
        printf("\n");
    }

    return (0);
}
