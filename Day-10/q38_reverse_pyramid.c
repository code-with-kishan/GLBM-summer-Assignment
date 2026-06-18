/*
 * GL Bajaj Summer Assignment — Day 10
 * Problem : Print reverse pyramid
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
