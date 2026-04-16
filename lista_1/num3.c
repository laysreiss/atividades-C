#include <stdio.h>
int soma(int a, int b) {

    return a + b;

}
int main() {

    int a, b;
    printf("Digite um numero:");
    scanf("%d", &a);
    printf("Digite outro numero:");
    scanf ("%d", &b);
    printf("A soma dos numeros é:%d", soma(a,b));
    return 0;
}
