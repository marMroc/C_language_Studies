/*Faça um programa em C que receba dois numeros. Calcule e mostre:
• a soma dos numeros pares desse intervalo de numeros, incluindo os numeros digitados;
• a multiplicação dos números ımpares desse intervalo, incluindo os digitados
*/

#include <stdio.h>

int main() {
    int num1, num2, soma_pares = 0, mult_impares = 1;
    
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    
    // calcula a soma dos numeros pares e a multiplicacao dos numeros impares
    for (int i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            soma_pares += i;
        } else {
            mult_impares *= i;
        }
    }
    
    printf("Soma dos numeros pares: %d\n", soma_pares);
    printf("Multiplicacao dos numeros impares: %d\n", mult_impares);
    
    return 0;
}
