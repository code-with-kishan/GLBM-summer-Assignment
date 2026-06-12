/*
 * GL Bajaj Summer Assignment — Day 05
 * Problem : Print factors of a number
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factors of %d: ", n);
    for (int i = 1; i <= n; i++)
        if (n % i == 0) printf("%d ", i);
    printf("\n");
    return 0;
}
