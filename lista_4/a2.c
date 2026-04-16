#include <stdio.h>

int main() {
    int v[5];

    printf("Digite 5 numeros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    return 0;
}