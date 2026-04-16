#include <stdio.h>
int quadrado(int n) {
    return (n * n);
}
int main () {
    int n;
    printf ("digite um numero");
    scanf("%d", &n);
    printf("o quadrado desse numero é %d", quadrado(n));
    return 0;

}