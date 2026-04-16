#include <stdio.h>
float soma(float a, float b) {
    return a + b;
}
float media(float a, float b) {
    return (a + b) / 2;
}
float maior (int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}
int main() {
    float a, b;
    printf("Digite um numero: ");
    scanf("%f", &a);
    printf("Digite outro numero: ");
    scanf("%f", &b);
    printf("A soma é: %1.f \n", soma (a,b));
    printf("A média é: %1.f \n", media(a,b));
    printf("O maior é: %1.f \n", maior(a,b));
    return 0;


}