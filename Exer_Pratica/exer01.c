/*Crie um programa capaz de ler uma sequência de caracteres e gravar ela em
um arquivo texto cujo nome é letras.txt*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *file;
    char letra[100];
    file=fopen("texto-01.txt", "w")

    if(file==NULL) {
        printf("Erro ao abrir o arquivo!");
        exit 0;
    }else { 
        do {
            printf("Digite uma letra:");
            scanf("%s", letra);
            fputc(letra[0], file);
            if (ferror(file)) {
                printf("Erro ao escrever no arquivo!");
            }
        } while (letra[0] != '0');
        fclose(file);
   
 return 0;     
}
