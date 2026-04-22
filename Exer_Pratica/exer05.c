/*Crie um programa que abra um arquivo do tipo texto chamado poesia.txt e o
renomeie para um nome informado pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char novo_nome[100];
    printf("Digite o novo nome do arquivo (com extensão .txt): ");
    scanf("%s", novo_nome);

    if (rename("poesia.txt", novo_nome) != 0) {
        perror("Erro ao renomear o arquivo");
        exit(0);
    } else {
        printf("Arquivo renomeado com sucesso para %s\n", novo_nome);
    }

    return 0;
}