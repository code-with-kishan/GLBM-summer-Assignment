/*
 * GL Bajaj Summer Assignment — Day 01
 * Problem : Multiplication table of a given number
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("\nMultiplication Table of %d:\n", n);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}
