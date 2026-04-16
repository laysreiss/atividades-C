#include <stdio.h>

int main() {
    int v[5] = {3, 8, 2, 10, 5};
    int maior = v[0];

    for (int i = 1; i < 5; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    printf("maior = %d\n", maior);

    return 0;
}