#include <stdio.h>

void spiralTraversal(int matrix[][100], int n) {
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int i;
    while (top <= bottom && left <= right) {
        for (i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;
        for (i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;
        if (top <= bottom) {
            for (i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right) {
            for (i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int matrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    spiralTraversal(matrix, n);
    return 0;
}
