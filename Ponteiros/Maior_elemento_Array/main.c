/* Escreva uma funcao que aceita como parametro um array de inteiros com N valores, e 
determina o maior elemento do array e o numero de vezes que este elemento ocorreu 
no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15,
8, 6, 15, a funcao deve retorna para o programa que a chamou o valor 15 e o numero 3 
(indicando que o numero 15 ocorreu 3 vezes). A funcao deve ser do tipo void.
*/

#include <stdio.h>

void maior_elemento(int *array, int n, int *maior, int *num_ocorrencias);

int main() {
    int array[] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
    int n = 9;
    int maior, num_ocorrencias;
    
    maior_elemento(array, n, &maior, &num_ocorrencias);
    
    printf("Maior elemento: %d\n", maior);
    printf("Número de ocorrências: %d\n", num_ocorrencias);
    
    return 0;
}

void maior_elemento(int *array, int n, int *maior, int *num_ocorrencias) {
    // inicializa o maior elemento com o primeiro elemento do array
    *maior = *array;
    
    // inicializa o número de ocorrências com 1 (já que o primeiro elemento é o maior)
    *num_ocorrencias = 1;
    
    // percorre o array a partir do segundo elemento
    for (int i = 1; i < n; i++) {
        // se o elemento atual é maior do que o maior elemento encontrado até agora,
        // atualiza o maior elemento e o número de ocorrências
        if (*(array + i) > *maior) {
            *maior = *(array + i);
            *num_ocorrencias = 1;
        }
        // se o elemento atual é igual ao maior elemento encontrado até agora,
        // incrementa o número de ocorrências
        else if (*(array + i) == *maior) {
            (*num_ocorrencias)++;
        }
    }
}
