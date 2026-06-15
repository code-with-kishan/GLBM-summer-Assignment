/*
 * GL Bajaj Summer Assignment — Day 08
 * Problem : Print half pyramid pattern
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
