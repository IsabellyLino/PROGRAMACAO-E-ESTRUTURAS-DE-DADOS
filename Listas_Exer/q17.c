/*Crie um programa que contenha uma estrutura Conta que represente a conta
corrente de um cliente de um Banco. O tipo Conta deve possuir os seguintes
campos:
a. Nome: nome do correntista;
b. NumCC: número da conta corrente.
Para testar esse novo tipo realize as seguintes tarefas:
(a) Crie uma função que preencha os campos de um correntista.
(b) Crie uma função que imprima na tela os dados do correntista.*/
#include <stdio.h>

typedef struct {
    char nome[50];
    int  numCC;
} Conta;

void preencherConta(Conta *c) {
    printf("Nome do correntista: "); scanf(" %[^\n]", c->nome);
    printf("Numero da conta: ");     scanf("%d", &c->numCC);
}

void imprimirConta(Conta c) {
    printf("--- Dados do Correntista ---\n");
    printf("Nome: %s\nConta: %d\n", c.nome, c.numCC);
}

int main() {
    Conta cliente;
    preencherConta(&cliente);
    imprimirConta(cliente);
    return 0;
}