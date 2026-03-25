#include <stdio.h>
#include <stdlib.h>

typedef struct TCarro {
    char placa[10];
    char nome[50];
    char marca[50];
    float motor;
    int ano;

} Carro;

typedef struct TCliente {
    char nome[50];
    char cpf[15];
    char cartao [20];
    char CNH [20];
    int idade;
    int genero;

} Cliente;

void cadastrarCliente(Cliente lista[], int TAM, int *qtd) {
    int i;
    char texto[50];

    if (*qtd < TAM) {
        printf("Digite o nome do cliente: ");
        scanf("%s", texto);
        strcpy(lista[*qtd].nome, texto);

        printf("Digite o CPF do cliente: ");
        scanf("%s", texto);
        strcpy(lista[*qtd].cpf, texto);

        printf("Digite o número do cartão do cliente: ");
        scanf("%s", texto);
        strcpy(lista[*qtd].cartao, texto);

        printf("Digite o número da CNH do cliente: ");
        scanf("%s", texto);
        strcpy(lista[*qtd].CNH, texto);

        printf("Digite a idade do cliente: ");
        scanf("%d", &lista[*qtd].idade);

        printf("Digite o gênero do cliente (0 para masculino, 1 para feminino): ");
        scanf("%d", &lista[*qtd].genero);

        (*qtd)++;
    } else {
        printf("Limite de clientes atingido.\n");
    }
}

void cadastrarCarro(Carro lista[], int TAM, int *qtd) {
    int i;
    char texto[50];

    if (*qtd < TAM) {
        printf("Digite a placa do carro: ");
        scanf("%s", texto);
        strcpy(lista[*qtd].placa, texto);

        printf("Digite o nome do carro: ");
        scanf("%s", texto);
        strcpy(lista[*qtd].nome, texto);

        printf("Digite a marca do carro: ");
        scanf("%s", texto);
        strcpy(lista[*qtd].marca, texto);

        printf("Digite o motor do carro: ");
        scanf("%f", &lista[*qtd].motor);

        printf("Digite o ano do carro: ");
        scanf("%d", &lista[*qtd].ano);

        (*qtd)++;
    } else {
        printf("Limite de carros atingido.\n");
    }
}

void excluirCarro(Carro lista[], int *qtd){
    int i, posicao;
    pos = buscarCarro(lista, qtd);
    printf("Excluir carro ")
    if (pos > -1) {
        for (i = pos; i < (*qtd) -1; i++)
            lista[i] = lista[i + 1];
    }
}

void gerarRelatorio(Carro lista[], int qtd) {
    int i;
    printf("Relatório de Carros:\n");
    for (i = 0; i < qtd; i++) {
        printf("Placa: %s, Nome: %s, Marca: %s, Motor: %.2f, Ano: %d\n",
               lista[i].placa, lista[i].nome, lista[i].marca,
               lista[i].motor, lista[i].ano);
    }
}

int main() {

    int qtdCarros = 5;
    Carro listaCarros[qtdCarros];
    Cliente listaClientes[qtdCarros];
}