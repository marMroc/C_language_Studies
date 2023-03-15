/*Faça um programa que determine e mostre os cinco primeiros
 múltiplos de 3, considerando números maiores que 0.
*/

#include <stdio.h>

int main() {
  int i, count = 0;

  printf("Os cinco primeiros múltiplos de 3 são:\n");

  for(i = 1; count < 5; i++) {
    if(i % 3 == 0) {
      printf("%d ", i);
      count++;
    }
  }

  printf("\n");

  return 0;
}