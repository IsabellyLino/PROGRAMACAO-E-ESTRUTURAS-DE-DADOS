/*Faça um programa capaz de armazenar os dados de vários atletas em um
arquivo binário chamado atletas.dat. Neste caso, utilize uma estrutura
chamada Atleta para representar os atletas. Esta estrutura deve conter
informações como o nome, esporte, idade e altura do atleta.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
} Atleta;

int main() 
{
    FILE *file;
    Atleta atleta;

    file = fopen("atletas.dat", "wb");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo atletas.dat!");
        exit(0);
    }

    while (1) {
        printf("Digite o nome do atleta (ou 'sair' para encerrar): ");
        scanf("%s", atleta.nome);
        if (strcmp(atleta.nome, "sair") == 0) {
            break;
        }
        printf("Digite o esporte do atleta: ");
        scanf("%s", atleta.esporte);
        printf("Digite a idade do atleta: ");
        scanf("%d", &atleta.idade);
        printf("Digite a altura do atleta: ");
        scanf("%f", &atleta.altura);

        fwrite(&atleta, sizeof(Atleta), 1, file);
        if (ferror(file)) {
            printf("Erro ao escrever no arquivo atletas.dat!");
            fclose(file);
            exit(0);
        }
    }

    fclose(file);
    return 0;
}
