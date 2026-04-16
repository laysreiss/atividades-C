#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Antes: %d\n", x);

    *p = 50;

    printf("Depois: %d\n", x);

    return 0;
}