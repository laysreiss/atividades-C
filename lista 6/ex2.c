#include <stdio.h>

float media(int v[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) soma += v[i];
    return soma / (float)n;
}

int maior(int v[], int n) {
    int m = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] > m) m = v[i];
    return m;
}

int menor(int v[], int n) {
    int m = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] < m) m = v[i];
    return m;
}

int main() {
    int v[10];

    for (int i = 0; i < 10; i++) scanf("%d", &v[i]);

    printf("Media: %.2f\n", media(v, 10));
    printf("Maior: %d\n", maior(v, 10));
    printf("Menor: %d\n", menor(v, 10));

    return 0;
}