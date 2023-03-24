/* Faça um algoritmo utilizando o comando while que mostra uma 
contagem regressivana tela, iniciando em 10 e terminando em 0.
 Mostrar uma mensagem “FIM!” após acontagem*/

#include <stdio.h>

int main() {
  int i = 10;

  printf("Contagem regressiva:\n");

  while(i >= 0) {
    printf("%d ", i);
    i--;
  }

  printf("\nFIM!\n");

  return 0;
}

