/* Faça um programa que receba 6 numeros inteiros e mostre:
• Os numeros pares digitados; 
• A soma dos numeros pares digitados; 
• Os numeros ımpares digitados;
• A quantidade de numeros ımpares digitados; */

#include <stdio.h>

int main() {
    int numeros[6];
    int i, soma_pares = 0, quant_impares = 0;

    printf("Digite 6 numeros inteiros:\n");

    // Lê os 6 números digitados pelo usuário
    for (i = 0; i < 6; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Numeros pares digitados: ");
    for (i = 0; i < 6; i++) {
        if (numeros[i] % 2 == 0) { // verifica se o número é par
            printf("%d ", numeros[i]);
            soma_pares += numeros[i]; // soma o número aos pares
        } else {
            printf("\nNumero impar digitado: %d", numeros[i]);
            quant_impares++; // incrementa a quantidade de números ímpares
        }
    }

    printf("\nSoma dos numeros pares digitados: %d\n", soma_pares);
    printf("Quantidade de numeros impares digitados: %d\n", quant_impares);

    return 0;
}
