#include <stdio.h>

int main() {
    int v[5] = {1, 2, 3, 4, 5};
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += v[i];
    }

    printf("soma = %d\n", soma);

    return 0;
}