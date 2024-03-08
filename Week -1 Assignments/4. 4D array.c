The equivalent pointer expression for fetching the value of array element a[i][j][k][2] is
*(a + (i * dim2 * dim3 * dim4) + (j * dim3 * dim4) + (k * dim4) + 2)


Example code:
#include <stdio.h>

int main() {
    int dim1 = 3, dim2 = 4, dim3 = 5, dim4 = 6;
    int a[dim1][dim2][dim3][dim4];

    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                for (int l = 0; l < dim4; l++) {
                    a[i][j][k][l] = i + j + k + l;
                }
            }
        }
    }
    int i = 1, j = 2, k = 3;
    int value = *(a + (i * dim2 * dim3 * dim4) + (j * dim3 * dim4) + (k * dim4) + 2);
    printf("Value of a[%d][%d][%d][2]: %d\n", i, j, k, value);
    return 0;
}
