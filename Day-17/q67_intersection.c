/*
 * GL Bajaj Summer Assignment — Day 17
 * Problem : Intersection of two arrays
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter sizes: ");
    scanf("%d %d", &m, &n);
    int a[m], b[n];
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    printf("Intersection: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i] == b[j]) { printf("%d ", a[i]); break; }
    printf("\n");
    return 0;
}
