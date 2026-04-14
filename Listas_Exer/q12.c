/*Crie um programa que leia duas matrizes A e B de dimensão 3 x 3 e crie uma
terceira matriz C = A x B, ou seja, C recebe a multiplicação das matrizes A e
B*/
void multiplicar(int A[3][3], int B[3][3], int C[3][3]) {
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++) {
            C[i][j] = 0;
            for (int k=0; k<3; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}
int main() {
    int A[3][3], B[3][3], C[3][3];
    printf("Matriz A:\n");
    for (int i=0; i<3; i++) for (int j=0; j<3; j++) { printf("A[%d][%d]: ",i,j); scanf("%d",&A[i][j]); }
    printf("Matriz B:\n");
    for (int i=0; i<3; i++) for (int j=0; j<3; j++) { printf("B[%d][%d]: ",i,j); scanf("%d",&B[i][j]); }
    multiplicar(A, B, C);
    printf("Matriz C (A x B):\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}