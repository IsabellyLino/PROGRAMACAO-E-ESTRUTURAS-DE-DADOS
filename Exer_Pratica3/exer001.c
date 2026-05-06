/*1. Dada uma lista estática que armazena valores do tipo inteiro, implemente tal
estrutura de dados utilizando com base a struct abaixo para representá-la;
#define MAXTAM 100
typedef struct EDLista {
int inicio;
int fim;
int qtd;
int dados[ MAXTAM ];
} Lista;
Em seguida, implemente as seguintes funções para manipular tal lista:
• Criar lista: Inicializar a lista, definindo os valores de inicio, fim e qtd;
• Destruir lista: Destruir a lista, definindo os valores de inicio, fim e qtd iguais
a zero;
• Inserir na lista: Inserir um valor na lista, mantendo ela ordenada;
• Remover na lista: Remover um número na lista com base no valor
informado pelo usuário e
• Buscar na lista: Buscar um número e retornar a posição em que ele está
na lista com base no valor informado pelo usuário.*/

#include<stdio.h>
#define MAXTAM 100

typedef struct EDLista {
    int inicio;
    int fim;
    int qtd;
    int dados[MAXTAM];
} Lista;

void criar(Lista *lista) {
    lista->inicio = 0;
    lista->fim = 0;
    lista->qtd = 0;
}

int cheia(Lista lista) {
    if (lista.qtd == MAXTAM) {
        printf("Lista cheia!\n");
        return 1;
    }
    return 0;
}

void inserir(Lista *lista, int valor) {
    int i, pos=0;
    if (!cheia(*lista)) {
        if (lista->qtd == 0) {
            lista->dados[lista->fim]=valor;
            lista->fim++;
            lista->qtd++;
        }else{
            pos = -1;
            for(i=0;i<lista->fim;i++) {
                if (valor < lista->dados[i]) {
                    pos = i;
                    break;
                }
            }
            if (pos>-1) {
                for(i=lista->fim;i>pos;i--) {
                    lista->dados[i] = lista->dados[i-1];
                }
                lista->dados[pos] = valor;
                lista->fim++;
                lista->qtd++;
            }else {
                lista->dados[lista->fim]=valor;
                lista->fim++;
                lista->qtd++;
            }
        }

    }
}

void exibir(Lista lista) {
    int i;
    printf("%d ", lista.dados[0]);
    for(i=1;i<lista.fim;i++) {
        printf("%d ", lista.dados[i]);
    }
    printf("\n");
    printf(".");
}

int main(){
    Lista minhaLista;
    int numero;

    criar(&minhaLista);
    printf("Digite um numero para inserir na lista: ");
    scanf("%d", &numero);
    printf("Digite um numero para inserir na lista: ");

    inserir(&minhaLista, numero);
    exibir(minhaLista);
    printf("Digite um numero para inserir na lista: ");
    scanf("%d", &numero);
    inserir(&minhaLista, numero);
    exibir(minhaLista);

    return 0;
}