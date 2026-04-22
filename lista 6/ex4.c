#include <stdio.h>

void separar(int v[], int n, int pares[], int *p, int impares[], int *i) {
    *p = *i = 0;

    for (int j = 0; j < n; j++) {
        if (v[j] % 2 == 0)
            pares[(*p)++] = v[j];
        else
            impares[(*i)++] = v[j];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int v[n], pares[n], impares[n];
    int p, i;

    for (int j = 0; j < n; j++) scanf("%d", &v[j]);

    separar(v, n, pares, &p, impares, &i);

    printf("Pares:\n");
    for (int j = 0; j < p; j++) printf("%d ", pares[j]);

    printf("\nImpares:\n");
    for (int j = 0; j < i; j++) printf("%d ", impares[j]);

    return 0;
}