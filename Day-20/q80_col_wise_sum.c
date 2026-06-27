/*
 * GL Bajaj Summer Assignment — Day 20
 * Problem : Find column-wise sum of matrix
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) sum += a[i][j];
        printf("Col %d sum = %d\n", j + 1, sum);
    }
    return 0;
}
