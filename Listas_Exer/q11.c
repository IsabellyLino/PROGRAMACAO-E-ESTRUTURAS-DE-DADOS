/*Desenvolva um programa que leia duas matrizes de dimensão 2 x 2 com
valores do tipo float. O programa deve ser capaz de realizar as seguintes
operações comas matrizes:
a) Somar as duas matrizes.
• Crie uma terceira matriz para armazenar o resultado.
b) Subtrair a primeira matriz da segunda.
• Crie uma terceira matriz para armazenar o resultado.
c) Adicionar uma constante às duas matrizes.
• Neste caso, o valor da constante é informado pelo usuário e o
resultado da sua adição deve ser armazenado na própria matriz.
d) Imprimir as matrizes.
O programa deve ter um menu de opções que permite ao usuário escolher
quais das operações ele deseja realizar.*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 2

void readMatrix(float matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);
        }
    }
}

void printMatrix(float matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addConstant(float matrix[SIZE][SIZE], float constant) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] += constant;
        }
    }
}

void sumMatrices(float matrixA[SIZE][SIZE], float matrixB[SIZE][SIZE], float result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

void subtractMatrices(float matrixA[SIZE][SIZE], float matrixB[SIZE][SIZE], float result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = matrixB[i][j] - matrixA[i][j];
        }
    }
}

int main() {
    float matrixA[SIZE][SIZE], matrixB[SIZE][SIZE], result[SIZE][SIZE];
    int choice;
    float constant;

    printf("Digite os elementos da matriz A:\n");
    readMatrix(matrixA);
    printf("Digite os elementos da matriz B:\n");
    readMatrix(matrixB);

    do {
        printf("\nMenu de Opções:\n");
        printf("1. Somar as matrizes\n");
        printf("2. Subtrair a matriz A da matriz B\n");
        printf("3. Adicionar uma constante às matrizes\n");
        printf("4. Imprimir as matrizes\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                sumMatrices(matrixA, matrixB, result);
                printf("Resultado da soma:\n");
                printMatrix(result);
                break;
            case 2:
                subtractMatrices(matrixA, matrixB, result);
                printf("Resultado da subtração:\n");
                printMatrix(result);
                break;
            case 3:
                printf("Digite a constante a ser adicionada: ");
                scanf("%f", &constant);
                addConstant(matrixA, constant);
                addConstant(matrixB, constant);
                printf("Constante adicionada às matrizes.\n");
                break;
            case 4:
                printf("Matriz A:\n");
                printMatrix(matrixA);
                printf("Matriz B:\n");
                printMatrix(matrixB);
                break;
            case 5:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (choice != 5);

    return 0;
}
