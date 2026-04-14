/*Desenvolva uma função recursiva que calcule e retorne o fatorial de um
número N (N!)*/

#include <stdio.h>

long long fatorial(int n) {
    if (n == 0 || n == 1) return 1;       
    return n * fatorial(n - 1);           
}

int main() {
    int n;
    printf("Digite N: "); scanf("%d", &n);
    if (n < 0) { printf("Fatorial nao definido para negativos!\n"); return 1; }
    printf("%d! = %lld\n", n, fatorial(n));
    return 0;
}