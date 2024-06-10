#include <stdio.h>

void transposeMatrix(int n, int matrix[n][n], int transposed[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    
    int matrix[n][n];
    int transposed[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printMatrix(n, matrix);
    transposeMatrix(n, matrix, transposed);
    printf("Transpose matrix is:\n");
    printMatrix(n, transposed);
    
    return 0;
}
