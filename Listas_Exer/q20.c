/*.Imagine que você é o desenvolvedor de uma plataforma de músicas online
que ainda não foi lançada, a SpotUai. Nessa plataforma é importante que
seja possível o registro de informações de cada música como o seu título,
nome do artista, gênero músical, tempo de duração da música e o número de
vezes que ela foi reproduzida. Logo, a estrutura a ser usada para o
armazenamento de uma música deve ser da seguinte forma:
Musica
char titulo[ 50 ]
char artista[ 50 ]
char gênero[ 50 ]
float duração
double numReproducoes
Dado que o desenvolvimento da plataforma ainda está em andamento,
algumas funcionalidades ainda precisam ser implementadas como é o caso
de algumas acerca da playlist de músicas. Crie um programa que tenha as
seguintes funcionalidades para a plataforma de músicas:
• Crie uma função para a criação de uma lista de músicas cujo o
tamanho é informado pelo usuário (use ponteiros e alocação
dinâmica de memória);
• Crie uma função para o cadastro das músicas na lista definida no item
anterior e
• Crie uma função que busque na lista a música com o maior tempo de
duração.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char   titulo[50];
    char   artista[50];
    char   genero[50];
    float  duracao;
    double numReproducoes;
} Musica;

/* Cria lista com tamanho definido pelo usuário */
Musica* criarLista(int *tamanho) {
    printf("Quantas musicas? "); scanf("%d", tamanho);
    return (Musica *) malloc(*tamanho * sizeof(Musica));
}

/* Cadastra músicas na lista */
void cadastrarMusicas(Musica *lista, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("\n--- Musica %d ---\n", i + 1);
        printf("Titulo  : "); scanf(" %[^\n]", lista[i].titulo);
        printf("Artista : "); scanf(" %[^\n]", lista[i].artista);
        printf("Genero  : "); scanf(" %[^\n]", lista[i].genero);
        printf("Duracao (s): "); scanf("%f",  &lista[i].duracao);
        printf("Reproducoes: "); scanf("%lf", &lista[i].numReproducoes);
    }
}

/* Busca a música com maior duração */
void musicaMaiorDuracao(Musica *lista, int tamanho) {
    int idx = 0;
    for (int i = 1; i < tamanho; i++)
        if (lista[i].duracao > lista[idx].duracao) idx = i;
    printf("\n=== Musica com maior duracao ===\n");
    printf("Titulo : %s\nArtista: %s\nDuracao: %.2f s\n",
           lista[idx].titulo, lista[idx].artista, lista[idx].duracao);
}

int main() {
    int tamanho;
    Musica *playlist = criarLista(&tamanho);
    cadastrarMusicas(playlist, tamanho);
    musicaMaiorDuracao(playlist, tamanho);
    free(playlist);
    return 0;
}