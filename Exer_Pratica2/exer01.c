/*Faça um programa que, utilizando as funções fputc() e fgetc(), seja capaz
de gravar e ler o seu nome, por exemplo, em um arquivo do tipo texto (.txt).
O programa deve ter um menu com as opções de ler e gravar no arquivo.*/

#include <stdio.h>
#include <stdlib.h>


void gravar(const char *nomeArquivo) {
    char nome[100];
    FILE *fp;
    int i;

    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);  /* lê nome com espacos */

    fp = fopen(nomeArquivo, "w");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    i = 0;
    while (nome[i] != '\0') {
        fputc(nome[i], fp);
        i++;
    }
    fputc('\n', fp);  /* quebra de linha no final */

    fclose(fp);
    printf("Nome gravado com sucesso!\n");
}

void ler(const char *nomeArquivo) {
    FILE *fp;
    int c;

    fp = fopen(nomeArquivo, "r");
    if (fp == NULL) {
        printf("Arquivo nao encontrado!\n");
        return;
    }

    printf("Conteudo do arquivo: ");
    /* le e exibe caractere por caractere */
    while (!feof(fp)) {
        c = fgetc(fp);
        if (!feof(fp))
            putchar(c);
    }
    printf("\n");

    fclose(fp);
}

int main() {
    int opcao;
    const char *arquivo = "nome.txt";

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Gravar nome\n");
        printf("2 - Ler nome\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) gravar(arquivo);
        else if (opcao == 2) ler(arquivo);

    } while (opcao != 0);

    return 0;
}
