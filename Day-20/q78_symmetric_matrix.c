/*
 * GL Bajaj Summer Assignment — Day 20
 * Problem : Check symmetric matrix
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    int sym = 1;
    for (int i = 0; i < n && sym; i++)
        for (int j = 0; j < n && sym; j++)
            if (a[i][j] != a[j][i]) sym = 0;
    printf("Matrix is %ssymmetric.\n", sym ? "" : "not ");
    return 0;
}
