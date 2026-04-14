/*Desenvolva um programa que faça:
a) Alocação dinâmica de um vetor formado por 5 inteiros;
b) Peça ao usuário para digitar os 5 números no espaço alocado;
c) Imprima na tela os 5 números digitados;
d) Libere a memória alocada.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = (int *) malloc(5 * sizeof(int));  
    for (int i=0; i<5; i++) { printf("v[%d]: ",i); scanf("%d",&v[i]); }
    printf("Valores: ");
    for (int i=0; i<5; i++) printf("%d ",v[i]);
    printf("\n");
    free(v);  
    return 0;
}