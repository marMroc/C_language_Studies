/*
Faça uma funcao recursiva que permita inverter um numero inteiro N. Ex: 123 - 321 

*/

#include <stdio.h>

int inverter_numero(int n);

int inverter_numero(int n) {
    // Caso base: se o número tem apenas um dígito, retorne ele mesmo
    if (n < 10) {
        return n;
    }
    
    // Caso recursivo: inverte o número sem o último dígito e adiciona o último dígito no final
    int ultimo_digito = n % 10;
    int numero_sem_ultimo_digito = n / 10;
    int numero_invertido_sem_ultimo_digito = inverter_numero(numero_sem_ultimo_digito);
    return (ultimo_digito * pow(10, num_digitos(numero_invertido_sem_ultimo_digito) ) ) + numero_invertido_sem_ultimo_digito;
}

int num_digitos(int n) {
    // retorna o número de dígitos de um número inteiro
    int num_digitos = 0;
    while (n != 0) {
        n /= 10;
        num_digitos++;
    }
    return num_digitos;
}

int main() {
    int numero = 123;
    int numero_invertido = inverter_numero(numero);
    printf("%d\n", numero_invertido);  // saída: 321
    return 0;
}


