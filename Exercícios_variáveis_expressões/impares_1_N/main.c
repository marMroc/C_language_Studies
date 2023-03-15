/*
Faça um programa que leia um número inteiro positivo ımpar N e imprima 
todos osnúmeros ımpares de 1 até N em ordem decrescente.
*/

#include <stdio.h>

int main() {
  int i, n;

  printf("Digite um número ímpar positivo: ");
  scanf("%d", &n);

  if(n % 2 == 0) {
    printf("O número digitado não é ímpar!\n");
    return 0;
  }

  printf("Os números ímpares de 1 a %d em ordem decrescente são:\n", n);

  for(i = n; i >= 1; i -= 2) {
    printf("%d ", i);
  }

  printf("\n");

  return 0;
}