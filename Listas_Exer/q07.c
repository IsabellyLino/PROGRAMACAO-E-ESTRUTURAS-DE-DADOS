/*Desenvolva um algoritmo que leia 6 valores do tipo inteiro, armazene eles em
um vetor de tamanho 6 e mostre todos eles na tela enquanto o vetor é
percorrido, porém os valores devem ser exibidos na ordem inversa.*/

#include <stdio.h>
#include <stdlib.h>
#define N 6

int main() {
    int v[N];
    for (int i = 0; i < N; i++) { printf("v[%d]: ", i); scanf("%d", &v[i]); }
    printf("Invertido: ");
    for (int i = N - 1; i >= 0; i--) printf("%d ", v[i]);
    printf("\n");
    return 0;
}