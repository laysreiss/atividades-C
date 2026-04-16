#include <stdio.h>

void mudar(int *p, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        *(p + i) += 10;
    }
}

int main() {
    int v[5];

    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    printf("Antes:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    mudar(v, 5);

    printf("\nDepois:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}