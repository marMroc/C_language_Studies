/*Faça um programa em C que receba dois numeros e mostre qual deles  é o maior.*/


#include <stdio.h>

int main() {
    int num1, num2, maior;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    maior = (num1 > num2) ? num1 : num2;
    printf("%d é maior que %d\n", maior, (maior == num1) ? num2 : num1);
    
    return 0;
}

