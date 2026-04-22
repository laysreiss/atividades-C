#include <stdio.h>

int main() {
    int v[10], x;

    for (int i = 0; i < 10; i++) scanf("%d", &v[i]);
    scanf("%d", &x);

    for (int i = 0; i < 10; i++)
        if (v[i] == x)
            v[i] = 0;

    for (int i = 0; i < 10; i++)
        printf("%d ", v[i]);

    return 0;
}