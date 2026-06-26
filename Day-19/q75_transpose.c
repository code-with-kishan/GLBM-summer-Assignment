/*
 * GL Bajaj Summer Assignment — Day 19
 * Problem : Transpose of a matrix
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    printf("Transpose:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) printf("%d ", a[j][i]);
        printf("\n");
    }
    return 0;
}
