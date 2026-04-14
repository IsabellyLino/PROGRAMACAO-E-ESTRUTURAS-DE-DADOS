/*Desenvolva um programa que leia uma matriz de dimensão 3 x 3, faça o
somatório dos elementos que estão armazenados abaixo da sua diagonal
principal e imprima o resultado na tela.*/

#include <stdio.h>
#define N 3

int main() {
    int m[N][N], soma = 0;
    for (int i=0; i<N; i++) for (int j=0; j<N; j++) { printf("m[%d][%d]: ",i,j); scanf("%d",&m[i][j]); }
    for (int i=0; i<N; i++) for (int j=0; j<N; j++) if (i > j) soma += m[i][j];
    printf("Soma abaixo da diagonal: %d\n", soma);
    return 0;
}