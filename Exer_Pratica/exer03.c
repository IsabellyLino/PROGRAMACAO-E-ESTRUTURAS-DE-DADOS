/*Faça um programa que abra dois arquivos texto, chamados texto1.txt e
texto2.txt, e grave o conteúdo deles em um terceiro arquivo chamado
texto3.txt. O conteúdo do primeiro arquivo deve ser seguido pelo segundo.
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *file1, *file2, *file3;
    char letra;

    file1 = fopen("texto-01.txt", "r");
    if (file1 == NULL) {
        printf("Erro ao abrir o arquivo texto-01.txt!");
        exit(0);
    }

    file2 = fopen("texto-02.txt", "r");
    if (file2 == NULL) {
        printf("Erro ao abrir o arquivo texto-02.txt!");
        fclose(file1);
        exit(0);
    }

    file3 = fopen("texto-03.txt", "w");
    if (file3 == NULL) {
        printf("Erro ao criar o arquivo texto-03.txt!");
        fclose(file1);
        fclose(file2);
        exit(0);
    }
    while ((letra = fgetc(file1)) != EOF) {
        fputc(letra, file3);
        if (ferror(file3)) {
            printf("Erro ao escrever no arquivo texto-03.txt!");
            fclose(file1);
            fclose(file2);
            fclose(file3);
            exit(0);
        }
    }
    while ((letra = fgetc(file2)) != EOF) {
        fputc(letra, file3);
        if (ferror(file3)) {
            printf("Erro ao escrever no arquivo texto-03.txt!");
            fclose(file1);
            fclose(file2);
            fclose(file3);
            exit(0);
        }
    }

    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}