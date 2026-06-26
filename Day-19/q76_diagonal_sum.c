/*
 * GL Bajaj Summer Assignment — Day 19
 * Problem : Find diagonal sum of matrix
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i][i];
    printf("Main diagonal sum = %d\n", sum);
    sum = 0;
    for (int i = 0; i < n; i++) sum += a[i][n - 1 - i];
    printf("Anti-diagonal sum = %d\n", sum);
    return 0;
}
