/*
 * GL Bajaj Summer Assignment — Day 17
 * Problem : Merge two arrays
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter sizes of two arrays: ");
    scanf("%d %d", &m, &n);
    int a[m], b[n], c[m + n];
    printf("Enter %d elements: ", m);
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    for (int i = 0; i < m; i++) c[i] = a[i];
    for (int i = 0; i < n; i++) c[m + i] = b[i];
    printf("Merged: ");
    for (int i = 0; i < m + n; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}
