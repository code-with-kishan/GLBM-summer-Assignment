/*
 * GL Bajaj Summer Assignment — Day 10
 * Problem : Print character pyramid (ABCBA style)
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) printf(" ");
        for (int j = 0; j <= i; j++) printf("%c", 'A' + j);
        for (int j = i - 1; j >= 0; j--) printf("%c", 'A' + j);
        printf("\n");
    }
    return 0;
}
