/*
 * GL Bajaj Summer Assignment — Day 19
 * Problem : Subtract matrices
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c];
    printf("Matrix A:\n");
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    printf("Matrix B:\n");
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &b[i][j]);
    printf("Difference:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%d ", a[i][j] - b[i][j]);
        printf("\n");
    }
    return 0;
}
