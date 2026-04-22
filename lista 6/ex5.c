#include <stdio.h>

int main() {
    int n, cont[10] = {0};

    scanf("%d", &n);

    if (n == 0) cont[0]++;

    while (n > 0) {
        cont[n % 10]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d=%d\n", i, cont[i]);
    }

    return 0;
}