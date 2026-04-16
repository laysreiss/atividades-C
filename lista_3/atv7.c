#include <stdio.h>

int main() {
    int v[3];
    int *p = v;

    printf("Digite 3 valores:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", (p + i));
    }

    for (int i = 0; i < 3; i++) {
        *(p + i) *= 2;
    }

    printf("Valores dobrados:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}