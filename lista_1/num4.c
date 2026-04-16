#include <stdio.h>
void nome (char usuario[]) {
    printf("Olá %s" ,usuario );

}
int main () {
    char usuario [50];
    printf("Qual é o seu nome?\n");
    scanf("%s", &usuario);
    nome (usuario);
    return 0;




}