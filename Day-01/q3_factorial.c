/*
 * GL Bajaj Summer Assignment — Day 01
 * Problem : Factorial of a number
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    long long fact = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) fact *= i;
    printf("Factorial of %d = %lld\n", n, fact);
    return 0;
}
