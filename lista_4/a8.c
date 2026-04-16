#include <stdio.h>

int main() {
    int v[5] = {2, 4, 6, 8, 10};
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += v[i];
    }

    float media = soma / 5.0;

    printf("Media = %.2f\n", media);

    return 0;
}
