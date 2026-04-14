/*13.Analise o código abaixo:
#include <stdio.h>
#include <stdlib.h>
int main() {
int a = 40; // cria uma variável do tipo inteiro, chamada a,
 // e inicializa com valor 40
int *p; // cria uma variável do tipo ponteiro para inteiro,
// chamada p e o conteúdo inicial e lixo
p = &a; // faz p receber o endereço de a. Dizemos que p aponta para a
return 0;
}
Neste exemplo, dizemos que “p aponta para a” ou “p referência a”. Use o código
acima como base e faça as seguintes operações:
a) Mostre o endereço da variável a de duas formas: uma usando &a e outra
usando o ponteiro p. Os endereços devem ser os mesmos.
b) Altere o valor da variável a usando o scanf sem usar o operador &.
c) Mostre o mapa de memória deste código ao final da execução.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 40;     
    int *p;         
    p = &a;     

    // a) Mostre o endereço da variável a de duas formas: uma usando &a e outra usando o ponteiro p.
    printf("Endereco de a usando &a: %p\n", (void*)&a);
    printf("Endereco de a usando ponteiro p: %p\n", (void*)p);

    // b) Altere o valor da variável a usando o scanf sem usar o operador &.
    printf("Digite um novo valor para a: ");
    scanf("%d", p); // Usando o ponteiro p para alterar o valor de a

    // c) Mostre o mapa de memória deste código ao final da execução.
    printf("Valor de a: %d\n", a);
    printf("Endereco de a: %p\n", (void*)&a);
    printf("Valor armazenado em p (endereco de a): %p\n", (void*)p);
    printf("Valor apontado por p (valor de a): %d\n", *p);

    return 0;
}