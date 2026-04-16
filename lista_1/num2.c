#include<stdio.h>
int numero(int n) {
  return n * 2;

}
int main() {

  int num;
  printf("Digite um numero: ");
  scanf("%d",&num);
  num = numero(num);
  printf("o dobro do numero é %d\n", num);
  return 0;
}