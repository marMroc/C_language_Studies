/*Escreva uma funcao que compare e retorne verdadeiro, caso uma string seja anagrama 
da outra, e falso, caso contrario*/

#include <stdio.h>
#include <string.h>

int is_anagram(char *str1, char *str2) {
    int freq[256] = {0}; // inicializa vetor de frequência com zeros
    
    // percorre a primeira string e incrementa a frequência de cada caractere
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[str1[i]]++;
    }
    
    // percorre a segunda string e decrementa a frequência de cada caractere
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[str2[i]]--;
    }
    
    // verifica se as frequências são todas iguais a zero
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            return 0; // não são anagramas
        }
    }
    
    return 1; // são anagramas
}

int main() {
    char str1[100], str2[100];
    
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    
    printf("Digite a segunda string: ");
    scanf("%s", str2);
    
    if (is_anagram(str1, str2)) {
        printf("As strings %s e %s sao anagramas.\n", str1, str2);
    } else {
        printf("As strings %s e %s nao sao anagramas.\n", str1, str2);
    }
    
    return 0;
}
