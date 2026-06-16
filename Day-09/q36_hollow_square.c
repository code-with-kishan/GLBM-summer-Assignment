/*
 * GL Bajaj Summer Assignment — Day 09
 * Problem : Print hollow square pattern
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
