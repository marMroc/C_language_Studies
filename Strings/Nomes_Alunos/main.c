/*Faça um programa para ler uma tabela contendo os nomes dos alunos de uma turma de
5 alunos. O programa deve solicitar ao usuario os nomes do aluno, sempre perguntando
  se ele deseja inserir mais um nome na lista. Uma vez lidos todos os alunos, o 
usuario ira indicar um nome que ele deseja verificar se esta presente na lista, 
onde o programa deve procurar pelo nome (ou parte deste nome) e se encontrar deve 
exibir na tela o nome completo e o indice do vetor onde esta guardado este nome
*/
#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 5
#define MAX_NOME 50

int main() {
    char nomes[MAX_ALUNOS][MAX_NOME];
    int num_alunos = 0;

    while (num_alunos < MAX_ALUNOS) {
        printf("Digite o nome do aluno %d: ", num_alunos+1);
        scanf("%s", nomes[num_alunos]);

        num_alunos++;

        if (num_alunos == MAX_ALUNOS) {
            printf("Limite de alunos atingido!\n");
        } else {
            printf("Deseja inserir mais um nome na lista? (s/n) ");
            char resposta;
            scanf(" %c", &resposta);
            if (resposta == 'n' || resposta == 'N') {
                break;
            }
        }
    }

    printf("Digite o nome que deseja buscar: ");
    char nome_busca[MAX_NOME];
    scanf("%s", nome_busca);

    for (int i = 0; i < num_alunos; i++) {
        if (strstr(nomes[i], nome_busca) != NULL) {
            printf("Nome completo: %s\n", nomes[i]);
            printf("Indice do vetor: %d\n", i);
        }
    }

    return 0;
}
