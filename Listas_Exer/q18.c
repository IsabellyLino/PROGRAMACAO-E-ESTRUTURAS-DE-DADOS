/*Faça uma função chamada primo que recebe como parâmetro um inteiro m
e dois outros inteiros p1 e p2 passados por referência. A função deve retornar
em p1 o maior número primo que é menor do que m e deve retornar em p2 o
menor número primo que é maior do que m*/

#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

void primo(int m, int *p1, int *p2) {
    // Busca o maior primo MENOR que m
    *p1 = m - 1;
    while (*p1 >= 2 && !ehPrimo(*p1)) (*p1)--;

    // Busca o menor primo MAIOR que m
    *p2 = m + 1;
    while (!ehPrimo(*p2)) (*p2)++;
}

int main() {
    int m, p1, p2;
    printf("Digite m: "); scanf("%d", &m);
    primo(m, &p1, &p2);
    printf("Maior primo < %d: %d\n", m, p1);
    printf("Menor primo > %d: %d\n", m, p2);
    return 0;
}