/*Crie um programa que seja capaz de definir uma matriz utilizando ponteiros
e alocação dinâmica de memória. O número de linhas e colunas da matriz é
definido pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;
    printf("Linhas e colunas: "); scanf("%d %d", &linhas, &colunas);

    // Aloca vetor de ponteiros (cada um aponta para uma linha)
    int **m = (int **) malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++)
        m[i] = (int *) malloc(colunas * sizeof(int));

    for (int i=0; i<linhas; i++)
        for (int j=0; j<colunas; j++) { printf("m[%d][%d]: ",i,j); scanf("%d",&m[i][j]); }

    printf("Matriz:\n");
    for (int i=0; i<linhas; i++) { for (int j=0; j<colunas; j++) printf("%4d",m[i][j]); printf("\n"); }

    // Libera memória
    for (int i=0; i<linhas; i++) free(m[i]);
    free(m);
    return 0;
}