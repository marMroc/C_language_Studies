/*Faça em C. Faca um programa que leia do usuario o tamanho de um vetor a ser lido e 
faca a alocacaodinamica de memoria. Em seguida, leia do usuario seus
 valores e imprima o vetor lido. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, i;
    int *vetor;
    
    // solicita ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    // aloca dinamicamente a memória necessária para o vetor
    vetor = (int*) malloc(tamanho * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    
    // lê os valores do vetor do usuário
    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    
    // imprime o vetor lido
    printf("Vetor lido: ");
    
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    
    printf("\n");
    
    // libera a memória alocada para o vetor
    free(vetor);
    
    return 0;
}
