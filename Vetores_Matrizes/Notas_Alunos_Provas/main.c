/* Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escreva
o numero de alunos cuja pior nota foi na prova 1, o numero de alunos cuja pior nota foi 
na prova 2, e o numero de alunos cuja pior nota foi na prova 3. Em caso de empate
das piores notas de um aluno, o criterio de desempate e arbitrario, mas o aluno deve ser
contabilizado apenas uma vez*/

#include <stdio.h>

#define LINHAS 10
#define COLUNAS 3

int main() {
    int notas[LINHAS][COLUNAS];
    int i, j, piores_notas[COLUNAS] = {0};

    // Lê as notas dos 10 alunos em 3 provas
    for (i = 0; i < LINHAS; i++) {
        printf("Digite as notas do aluno %d (3 provas separadas por espaco):\n", i + 1);
        for (j = 0; j < COLUNAS; j++) {
            scanf("%d", &notas[i][j]);
        }
    }

    // Encontra a pior nota de cada prova
    for (j = 0; j < COLUNAS; j++) {
        int pior_nota = notas[0][j];
        for (i = 1; i < LINHAS; i++) {
            if (notas[i][j] < pior_nota) {
                pior_nota = notas[i][j];
            }
        }
        // Contabiliza o número de alunos cuja pior nota foi na prova j+1
        for (i = 0; i < LINHAS; i++) {
            if (notas[i][j] == pior_nota) {
                piores_notas[j]++;
                break;
            }
        }
    }

    printf("Numero de alunos cuja pior nota foi na prova 1: %d\n", piores_notas[0]);
    printf("Numero de alunos cuja pior nota foi na prova 2: %d\n", piores_notas[1]);
    printf("Numero de alunos cuja pior nota foi na prova 3: %d\n", piores_notas[2]);

    return 0;
}
