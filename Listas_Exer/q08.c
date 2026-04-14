/*Desenvolva um programa que leia 10 valores do tipo inteiro, armazene todos
eles em um vetor de tamanho 10 e mostre:
a) Os números pares digitados.
b) A soma dos números pares digitados.
c) Os números ímpares digitados.
d) A quantidade de números ímpares digitados.*/

#include <stdio.h>
#define N 10

int main() {
    int v[N], pares[N], impares[N];
    int soma_pares = 0, qtd_impares = 0;

    for (int i = 0; i < N; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < N; i++) {
        if (v[i] % 2 == 0) {
            pares[soma_pares] = v[i];
            soma_pares++;
        } else {
            impares[qtd_impares] = v[i];
            qtd_impares++;
        }
    }

    printf("Números pares: ");
    for (int i = 0; i < soma_pares; i++) {
        printf("%d ", pares[i]);
    }
    printf("\nSoma dos números pares: %d\n", soma_pares);

    printf("Números ímpares: ");
    for (int i = 0; i < qtd_impares; i++) {
        printf("%d ", impares[i]);
    }
    printf("\nQuantidade de números ímpares: %d\n", qtd_impares);

    return 0;
}