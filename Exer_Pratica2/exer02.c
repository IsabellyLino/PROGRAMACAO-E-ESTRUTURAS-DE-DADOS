/*Utilizando as funções fprintf() e fscanf() faça um programa que seja capaz
de registrar e ler os nomes dos alunos da turma de SIN 215 a partir de um
arquivo que também é criado pelo seu programa.*/

#include <stdio.h>
#include <stdlib.h>

void cadastrar(const char *arquivo) {
    char nome[100];
    FILE *fp;

    fp = fopen(arquivo, "a");  /* modo "a" = acrescenta */
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", nome);

    fprintf(fp, "%s\n", nome);  /* grava nome + nova linha */

    fclose(fp);
    printf("Aluno cadastrado!\n");
}

void listar(const char *arquivo) {
    char nome[100];
    FILE *fp;
    int num = 1;

    fp = fopen(arquivo, "r");
    if (fp == NULL) {
        printf("Nenhum aluno cadastrado ainda.\n");
        return;
    }

    printf("\n--- Lista de Alunos ---\n");
    /* lê cada linha até o fim do arquivo */
    while (fscanf(fp, " %[^\n]", nome) == 1) {
        printf("%d. %s\n", num, nome);
        num++;
    }

    fclose(fp);
}

int main() {
    int opcao;
    const char *arquivo = "alunos_sin215.txt";

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Listar alunos\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) cadastrar(arquivo);
        else if (opcao == 2) listar(arquivo);

    } while (opcao != 0);

    return 0;
}
