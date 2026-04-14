/*Desenvolva um programa que implemente uma função que receba uma
temperatura em graus Celsius e retorne ela convertida em Fahrenheit. A
fórmula de conversão é:
𝐹 = 𝐶 ∗ (9.0/5.0) + 32.0
Onde F é a temperatura em Fahrenheit e C a temperatura em Celsius*/ 

#include <stdio.h>
#include <stdlib.h>

int main() {
    float celsius, fahrenheit;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}

