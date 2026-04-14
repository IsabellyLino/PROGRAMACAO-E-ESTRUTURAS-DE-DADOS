/*Desenvolva um programa que preencha dois vetores do tipo inteiro A e B de
tamanho 5. Os vetores A e B estão ordenados e os valores armazenados
neles são os seguintes:
Em seguida, deve ser criado um vetor do tipo inteiro C de tamanho 10. O
vetor C deve ser preenchido por meio da intercalação dos valores
armazenados nos vetores A e B, de forma que os valores em C permaneçam
ordenados.*/

#include <stdio.h>
#define TAM 5

int main() {
    int A[TAM] = {2,4,6,8,10}, B[TAM] = {1,3,5,7,9}, C[TAM*2];
    int i=0, j=0, k=0;
    while (i < TAM && j < TAM) C[k++] = (A[i] < B[j]) ? A[i++] : B[j++];
    while (i < TAM) C[k++] = A[i++];
    while (j < TAM) C[k++] = B[j++];
    printf("C: ");
    for (int x = 0; x < TAM*2; x++) printf("%d ", C[x]);
    printf("\n");
    return 0;
}