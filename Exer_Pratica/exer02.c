/*Crie um programa capaz de abrir um arquivo chamado letras.txt, ler os
caracteres contidos nele e os imprimir na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char letra;
    file = fopen("texto-01.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!");
        exit(0);
    } else {
        while ((letra = fgetc(file)) != EOF) {
            printf("%c", letra);
        }
        fclose(file);

    return 0;
}