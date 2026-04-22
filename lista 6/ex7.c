#include <stdio.h>

int main() {
    int v[10], x[5];

    for (int i = 0; i < 10; i++) scanf("%d", &v[i]);
    for (int i = 0; i < 5; i++) scanf("%d", &x[i]);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            if (v[i] == x[j]) {
                v[i] = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++)
        printf("%d ", v[i]);

    return 0;
}