The equivalent pointer expression for fetching the value of array element a[i][j][k][2] is
*(*(*(*(a + i) + j) + k) + 2)


Example code:
#include <stdio.h>

int main() {
    int a[3][4][5][6];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 5; k++) {
                for (int l = 0; l < 6; l++) {
                    a[i][j][k][l] = i + j + k + l;
                }
            }
        }
    }
    int i = 1, j = 2, k = 3;
    int value = *(*(*(*(a + i) + j) + k) + 2);
    printf("Value of a[%d][%d][%d][2]: %d\n", i, j, k, value);
    return 0;
}
