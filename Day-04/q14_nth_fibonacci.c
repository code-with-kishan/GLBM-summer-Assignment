/*
 * GL Bajaj Summer Assignment — Day 04
 * Problem : Find nth Fibonacci term
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    long long a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        long long c = a + b; a = b; b = c;
    }
    printf("%dth Fibonacci term = %lld\n", n, (n == 1) ? a : b);
    return 0;
}
