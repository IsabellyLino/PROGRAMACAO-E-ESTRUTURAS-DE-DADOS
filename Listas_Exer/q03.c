/*Desenvolva um algoritmo com uma função que receba como parâmetro dois
números e um símbolo. O símbolo deve representar a operação aritmética
que se deseja realizar com os números, de acordo com os critérios abaixo.
• +: realizar operação de adição;
• -: realizar operação de subtração;
• *: realizar operação de multiplicação;
• /: realizar operação de divisão;*/

#include <stdio.h>
#include <stdlib.h>

int calcular(double a, double b, char op, double *res) {
    switch (op) {
        case '+': *res = a + b; return 1;
        case '-': *res = a - b; return 1;
        case '*': *res = a * b; return 1;
        case '/':
            if (b == 0) { printf("Erro: divisao por zero!\n"); return 0; }
            *res = a / b; return 1;
        default: printf("Operador invalido!\n"); return 0;
    }
}

int main() {
    double a, b, res;
    char op;
    printf("Digite: numero operador numero\n");
    scanf("%lf %c %lf", &a, &op, &b);
    if (calcular(a, b, op, &res))
        printf("%.2f %c %.2f = %.2f\n", a, op, b, res);
    return 0;
}