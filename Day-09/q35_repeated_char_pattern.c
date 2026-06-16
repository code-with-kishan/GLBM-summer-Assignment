/*
 * GL Bajaj Summer Assignment — Day 09
 * Problem : Print repeated character pattern (A BB CCC...)
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) printf("%c", 'A' + i);
        printf("\n");
    }
    return 0;
}
