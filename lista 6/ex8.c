#include <stdio.h>

int main() {
    int v[15], x;

    for (int i = 0; i < 15; i++) scanf("%d", &v[i]);
    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        for (int j = i + 1; j < x; j++) {
            if (v[i] > v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    for (int i = x + 1; i < 15; i++) {
        for (int j = i + 1; j < 15; j++) {
            if (v[i] < v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    for (int i = 0; i < 15; i++)
        printf("%d ", v[i]);

    return 0;
}