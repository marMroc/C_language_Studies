/*Faca um programa que leia o conteudo de um arquivo e crie um arquivo com o mesmo 
conteudo, mas com todas as letras minusculas convertidas para maiusculas. Os nomes
 dos arquivos serao fornecidos, via teclado, pelo usuario. A funcao que converte 
maiuscula para minuscula e o toupper(). Ela e aplicada em cada caractere da string.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char nome_arquivo_entrada[100], nome_arquivo_saida[100], c;
    
    // solicita os nomes dos arquivos ao usuário
    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nome_arquivo_entrada);
    
    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nome_arquivo_saida);
    
    // abre o arquivo de entrada para leitura
    FILE *arquivo_entrada = fopen(nome_arquivo_entrada, "r");
    
    if (arquivo_entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }
    
    // abre o arquivo de saída para escrita
    FILE *arquivo_saida = fopen(nome_arquivo_saida, "w");
    
    if (arquivo_saida == NULL) {
        printf("Erro ao abrir o arquivo de saida.\n");
        return 1;
    }
    
    // lê o arquivo de entrada caractere por caractere e escreve no arquivo de saída
    while ((c = fgetc(arquivo_entrada)) != EOF) {
        fputc(toupper(c), arquivo_saida); // converte o caractere para maiúscula
    }
    
    // fecha os arquivos
    fclose(arquivo_entrada);
    fclose(arquivo_saida);
    
    printf("Arquivo convertido com sucesso.\n");
    
    return 0;
}
