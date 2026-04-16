#include <stdio.h>

int main() {
    int v[5];
    int invertido[5];

    printf("Digite 5 numeros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    // inverter
    for (int i = 0; i < 5; i++) {
        invertido[i] = v[4 - i];
    }

    printf("Normal:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    printf("\nInvertido:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", invertido[i]);
    }

    return 0;
}