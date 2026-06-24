/*
 * GL Bajaj Summer Assignment — Day 17
 * Problem : Union of two arrays
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter sizes: ");
    scanf("%d %d", &m, &n);
    int a[m], b[n], res[m + n], rsize = 0;
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    for (int i = 0; i < m; i++) res[rsize++] = a[i];
    for (int i = 0; i < n; i++) {
        int dup = 0;
        for (int j = 0; j < m; j++) if (a[j] == b[i]) { dup = 1; break; }
        if (!dup) res[rsize++] = b[i];
    }
    printf("Union: ");
    for (int i = 0; i < rsize; i++) printf("%d ", res[i]);
    printf("\n");
    return 0;
}
