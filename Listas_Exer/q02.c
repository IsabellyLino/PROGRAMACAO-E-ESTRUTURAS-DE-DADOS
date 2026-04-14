/*Crie um programa que implemente uma função que receba dois números
inteiros X e Y por parâmetro e retorne a soma dos N números inteiros
existentes entre eles.*/

#include <stdio.h>
#include <stdlib.h>

int somaEntreXeY(int x, int y) {
    int soma = 0, inicio, fim;
    if (x < y) { inicio = x + 1; fim = y - 1; }
    else        { inicio = y + 1; fim = x - 1; }
    for (int i = inicio; i <= fim; i++) soma += i;
    return soma;
}

int main() {
    int x, y;
    printf("Digite X e Y: ");
    scanf("%d %d", &x, &y);
    printf("Soma entre %d e %d = %d\n", x, y, somaEntreXeY(x, y));
    return 0;
}