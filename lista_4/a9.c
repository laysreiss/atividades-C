#include <stdio.h>

void dobrar(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        v[i] *= 2;
    }
}

int main() {
    int v[5] = {1, 2, 3, 4, 5};

    dobrar(v, 5);

    printf("Vetor dobrado:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}