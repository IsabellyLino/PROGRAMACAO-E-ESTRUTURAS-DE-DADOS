#include <stdio.h>
#include <stdlib.h>

void mostrar(int *v, int n)
{
    int i;
    for (i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}
void inserir(int *v, int n)
{
    int valor, i;
    for (i = 0; i < n; i++){
      printf("Digite o valor a ser inserido: ");
      scanf("%d", &valor);
      v[i] = valor;
    }
}
int pesquisar (int *v, int n, int valor) {
    int i;
    for (i = 0; i < n; i++) {
        if (v[i] == valor) {
            return i;
        }
    }
    return -1;
}
void escalar(int *v, int n, int mult) {
    int i;
    for (i = 0; i < n; i++) {
        v[i] = v[i] * mult;
    }
}

int main() {
    int *lista, n, opcao;

    printf("Digite o tamanho da lista: ");
    scanf("%d", &n);
    lista = (int*)malloc(n * sizeof(int));

    do{
        printf("\n === Escolha uma das seguintes opções === \n");
        printf("1. Inserir elementos\n");
        printf("2. Mostrar elementos\n");
        printf("3. Pesquisar elemento\n");
        printf("4. Escalar elementos\n");
        printf("5. Sair\n");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                inserir(lista, n);
                break;
            case 2:
                mostrar(lista, n);
                break;
            case 3: {
                int valor, posicao;
                printf("Digite o valor a ser pesquisado: ");
                scanf("%d", &valor);
                posicao = pesquisar(lista, n, valor);
                if (posicao != -1) {
                    printf("Valor encontrado na posição: %d\n", posicao);
                } else {
                    printf("Valor não encontrado na lista.\n");
                }
                break;
            }
            case 4: {
                int mult;
                printf("Digite o valor do multiplicador: ");
                scanf("%d", &mult);
                escalar(lista, n, mult);
                break;
            }
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while(opcao<1 || opcao>5);

    return 0;
}