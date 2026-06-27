/*
 * GL Bajaj Summer Assignment — Day 20
 * Problem : Find row-wise sum of matrix
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) sum += a[i][j];
        printf("Row %d sum = %d\n", i + 1, sum);
    }
    return 0;
}
