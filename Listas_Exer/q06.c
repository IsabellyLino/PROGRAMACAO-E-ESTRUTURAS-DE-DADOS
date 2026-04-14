/*Desenvolva uma função que seja capaz de calcular o volume e a área de
uma esfera por meio da seguinte fórmula:
• Fórmula do volume: 𝑉 =
4
3
∗ 𝜋 ∗ 𝑟
3
;
• Fórmula da área: 𝐴 = 4 ∗ 𝜋 ∗ 𝑟
2
;
• Considera-se que o valor de π é aproximadamente: 3.1414592 e
• Considera-se que r é o valor do raio.
A função deve receber o valor do raio r como parâmetro para a função
(passagem por valor). Além disso, a função deve retornar os valores do volume
e da área calculados com o auxílio da passagem por referência. Neste caso,
passe para a função como parâmetro, via passagem por referência, duas
variáveis chamadas volume e área, por exemplo, tal que essas variáveis
contenham os valores calculados pela função.*/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926

void calcularEsfera(double r, double *volume, double *area) {
    *volume = (4.0 / 3.0) * PI * r * r * r;
    *area   = 4.0 * PI * r * r;
}

int main() {
    double r, v, a;
    printf("Raio: "); scanf("%lf", &r);
    calcularEsfera(r, &v, &a);
    printf("Volume: %.4f\nArea: %.4f\n", v, a);
    return 0;
}