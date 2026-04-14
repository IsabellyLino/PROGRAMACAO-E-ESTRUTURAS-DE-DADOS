/*Desenvolva uma função que receba como parâmetro um número inteiro N,
faça com que o usuário informe N valores e, ao final, retorne o maior e o
menor valor lido. Para retornar o maior e o menor valor lido faça a passagem
por referência para a função de duas variáveis, chamadas maior e menor,
que devem conter os valores do maior e menor números lidos,
respectivamente.*/

#include <stdio.h>
#include <stdlib.h>

void encontrarMaiorMenor(int n, int *maior, int *menor) {
    int val;
    printf("Digite o 1o valor: "); scanf("%d", &val);
    *maior = *menor = val;
    for (int i = 2; i <= n; i++) {
        printf("Digite o %do valor: ", i); scanf("%d", &val);
        if (val > *maior) *maior = val;
        if (val < *menor) *menor = val;
    }
}

int main() {
    int n, maior, menor;
    printf("Quantos valores? "); scanf("%d", &n);
    encontrarMaiorMenor(n, &maior, &menor);
    printf("Maior: %d | Menor: %d\n", maior, menor);
    return 0;
}