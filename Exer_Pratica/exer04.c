/*Crie um programa que leia um arquivo texto chamado compras.txt que
contém, em cada linha, o nome, a quantidade e o valor unitário de cada
produto. O programa deve calcular e imprimir o valor total da compra com
base no texto contido no arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *file;
    char nome[50];
    int quantidade;
    float valor_unitario, valor_total = 0.0;

    file = fopen("compras.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo compras.txt!");
        exit(0);
    }

    while (fscanf(file, "%s %d %f", nome, &quantidade, &valor_unitario) == 3) {
        valor_total += quantidade * valor_unitario;
    }

    fclose(file);

    printf("Valor total da compra: R$ %.2f\n", valor_total);

    return 0;
}