/*
 * GL Bajaj Summer Assignment — Day 06
 * Problem : Find x^n without pow()
 * Author  : Kishan Nishad
 */
#include <stdio.h>

long long power(long long base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) result *= base;
    return result;
}

int main() {
    long long x;
    int n;
    printf("Enter base and exponent: ");
    scanf("%lld %d", &x, &n);
    printf("%lld ^ %d = %lld\n", x, n, power(x, n));
    return 0;
}
