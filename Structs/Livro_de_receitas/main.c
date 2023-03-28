/*Faça um programa para armazenar um livro de receitas e:
• Crie um vetor de 5 receitas, que deve ter nome (maximo 25 letras), quantidade de ingredientes e ingredientes.
• Para cada receita, leia seu nome e a quantidade de ingredientes. Entao crie e leia 
o vetor de ingredientes, sendo que cada ingrediente contem nome e quantidade. 
• Procure receita por nome, mostrando seus ingredientes se encontrar. Se não encontrar, informe ao usuario. Repita o processo até digitar uma string vazia*/
#include <stdio.h>
#include <string.h>

#define MAX_RECEITAS 5
#define MAX_NOME 25
#define MAX_INGREDIENTES 10

typedef struct {
    char nome[MAX_NOME];
    float quantidade;
} Ingrediente;

typedef struct {
    char nome[MAX_NOME];
    int qtd_ingredientes;
    Ingrediente ingredientes[MAX_INGREDIENTES];
} Receita;

void cadastrar_receita(Receita receitas[], int *num_receitas) {
    if (*num_receitas == MAX_RECEITAS) {
        printf("O limite de receitas foi atingido!\n");
        return;
    }

    Receita nova_receita;
    printf("Digite o nome da receita: ");
    scanf("%s", nova_receita.nome);

    printf("Digite a quantidade de ingredientes da receita: ");
    scanf("%d", &nova_receita.qtd_ingredientes);

    for (int i = 0; i < nova_receita.qtd_ingredientes; i++) {
        printf("Digite o nome do ingrediente %d: ", i+1);
        scanf("%s", nova_receita.ingredientes[i].nome);

        printf("Digite a quantidade do ingrediente %d: ", i+1);
        scanf("%f", &nova_receita.ingredientes[i].quantidade);
    }

    receitas[*num_receitas] = nova_receita;
    *num_receitas += 1;
    printf("Receita cadastrada com sucesso!\n");
}

void buscar_receita(Receita receitas[], int num_receitas, char nome_receita[]) {
    for (int i = 0; i < num_receitas; i++) {
        if (strcmp(receitas[i].nome, nome_receita) == 0) {
            printf("Ingredientes da receita %s:\n", receitas[i].nome);
            for (int j = 0; j < receitas[i].qtd_ingredientes; j++) {
                printf("%s - %.2f\n", receitas[i].ingredientes[j].nome, receitas[i].ingredientes[j].quantidade);
            }
            return;
        }
    }
    printf("Receita nao encontrada!\n");
}

int main() {
    Receita receitas[MAX_RECEITAS];
    int num_receitas = 0;

    while (1) {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Cadastrar receita\n");
        printf("2 - Buscar receita\n");
        printf("3 - Sair\n");

        int opcao;
        scanf("%d", &opcao);

        if (opcao == 1) {
            cadastrar_receita(receitas, &num_receitas);
        } else if (opcao == 2) {
            char nome_receita[MAX_NOME];
            printf("Digite o nome da receita: ");
            scanf("%s", nome_receita);
            buscar_receita(receitas, num_receitas, nome_receita);
        } else if (opcao == 3) {
            printf("Encerrando programa...\n");
            break;
        } else {
            printf("Opcao invalida!\n");
        }
    }

    return 0;
}
