/*
 * GL Bajaj Summer Assignment — Day 09
 * Problem : Print reverse number triangle
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("%d", j);
        printf("\n");
    }
    return 0;
}
