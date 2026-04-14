/*Crie um programa com uma função chamada trocar, que recebe como
parâmetro duas variáveis do tipo double A e B e troca os valores delas.
Exemplo:
Digite o valor de A: 5
Digite o valor de B: 10
Valor de A: 10
Valor de B: 5*/

#include <stdio.h>
#include <stdlib.h>

void trocar(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    double a, b;
    printf("A: "); scanf("%lf", &a);
    printf("B: "); scanf("%lf", &b);
    trocar(&a, &b);
    printf("Depois: A=%.2f  B=%.2f\n", a, b);
    return 0;
}