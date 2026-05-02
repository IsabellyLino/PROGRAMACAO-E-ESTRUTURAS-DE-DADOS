/*3. Considere a seguinte estrutura:
typedef struct {
int codProduto;
float preco;
char nome[50];
} Produto;
Suponha que a estrutura Produto se refere aos produtos de uma fábrica e que
os atributos codProduto, preço e nome representam o código de identificação,
preço e nome de cada um dos produtos. A partir dessas informações faça os
seguintes exercícios:
a) Com base na estrutura acima faça um programa que seja capaz de fazer
o cadastro dos produtos em um arquivo binário e que permita a
visualização dos dados deles após a gravação.
b) A partir do programa feito no item (a) adicione a ele a função de realizar a
visualização dos dados de todos os produtos gravados no arquivo. Tal função deve ser capaz de informar qual é o valor médio do preço dos
produtos, quais sãos os produtos com o maior e o menor preço. Também
adicione a função de fazer a pesquisa no arquivo pelo nome do produto e
exibir os dados dele, caso ele esteja cadastrado no arquivo.
c) A partir do programa feito do item (b) crie funções que permitam a
exclusão e edição de um produto que esteja registrado no arquivo. (Dica:
crie um arquivo novo com os dados atualizados e substitua o arquivo
anterior por ele)*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codProduto;
    float preco;
    char nome[50];
} Produto;

void cadastrar(Produto estoque[], int n, int *q){
    int i;
    printf("Cadastrar Produtos\n");

    if(*q < n){
        printf("\nInforme o nome:");
        fgets(estoque[*q].nome, 10, stdin);
        printf("\nInforme o codigo:");
        scanf("%d", &estoque[*q].codProduto);
        printf("\nInforme o preço:");
        scanf("%f", &estoque[*q].preco);
        (*q)++;
    }else {
        printf("\nEstoque cheio!");
    }
}

void mostrar(Produto estoque[], int n) {
    int i;
    printf("Produtos Cadastrados\n");
    for(i = 0; i < n; i++){
        printf("\nProduto %d", i+1);
        printf("\nNome: %s", estoque[i].nome);
        printf("\nCodigo: %d", estoque[i].codProduto);
        printf("\nPreço: %.2f\n", estoque[i].preco);
        // getchar();
    }
}

void gravar(Produto estoque[], int n){
    FILE *f;
    f = fopen("estoque.bin", "wb");
    if(f == NULL){
        printf("\nErro ao abrir o arquivo!");
        exit(1);
    }
    fwrite(estoque, sizeof(Produto), n, f);
    fclose(f);
}

void lerArquivo(Produto estoque[],FILE *arq, int *n){
    arq = fopen("estoque.bin", "rb");
    if(arq == NULL){
        printf("\nErro ao abrir o arquivo!");
        exit(1);
    }
    while(!feof(arq)){
        estoque[i]=aux;
        printf("Codigo: %d", estoque[n].codigo);
        n++;
        fread (&aux, sizeof(Produto), 1, arq);
        if (ferroe(arq))
            printf("\nErro ao abrir o arquivo!")
    }
}

void excluir(Produto estoque[], int n, FILE *arq){
    int i;
    printf("Excluir arquivo");
    remove(arq);
    if (ferror(arq))
        printf("Erro ao excluir o arquivo");
}

void editar(Produto estoqque[], int n, FILE *arq) {
    int cont = 0;
    FILE *bkp=fopen("arq-temporario.dat", "wb+");
    lerArquivo(estoque, arq, n);

    editar(estoque, n);

    gravar(estoque, bkp, n);

    remove(arq);
    rename("arq-temporario.dat", "produtos.dat");
}

int main(){
    Produto estoque[10];
    int n = 0, opcao;
    FILE *arq;

    do{
        printf("\nMenu:");
        printf("\n1 - Cadastrar Produto");
        printf("\n2 - Mostrar Produtos");
        printf("\n3 - Gravar Produtos");
        printf("\n4 - Ler Produtos");
        printf("\n0 - Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
            case 1:
                cadastrar(estoque, 10, &n);
                break;
            case 2:
                mostrar(estoque, n);
                break;
            case 3:
                gravar(estoque, n);
                break;
            case 4:
                lerArquivo(estoque, arq, &n);
                break;
            case 0:
                printf("\nSaindo...");
                break;
            default:
                printf("\nOpção inválida!");
        }
    } while(opcao != 0);

    return 0;
}