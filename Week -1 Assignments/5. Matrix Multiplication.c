#include <stdio.h>

void matrixMultiplication(int *mat1, int *mat2, int *result, int n) {
    int i, j, k;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            *(result + i * n + j) = 0;
            for (k = 0; k < n; k++) {
                *(result + i * n + j) += (*(mat1 + i * n + k)) * (*(mat2 + k * n + j));
            }
        }
    }
}

void displayMatrix(int *matrix, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", *(matrix + i * n + j));
        }
        printf("\n");
    }
}

int main() {
    int n, i, j,m;
    printf("Size of Row: ");
    scanf("%d", &n);
    printf("Size of Column: ");
    scanf("%d", &m);
    int mat1[n][n], mat2[n][n], result[n][n];
    printf("Matrix 1:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Matrix 2:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    matrixMultiplication(&mat1[0][0], &mat2[0][0], &result[0][0], n);
    printf("Product:\n");
    displayMatrix(&result[0][0], n);

    return 0;
}
