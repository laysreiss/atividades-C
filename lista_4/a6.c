#include <stdio.h>

int main() {
    int v[5] = {1, 2, 3, 4, 6};
    int cont = 0;

    for (int i = 0; i < 5; i++) {
        if (v[i] % 2 == 0) {
            cont++;
        }
    }

    printf("pares = %d\n", cont);

    return 0;
}