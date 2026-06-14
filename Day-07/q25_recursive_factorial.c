/*
 * GL Bajaj Summer Assignment — Day 07
 * Problem : Recursive factorial
 * Author  : Kishan Nishad
 */
#include <stdio.h>

long long fact(int n) { return n <= 1 ? 1 : n * fact(n - 1); }

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %lld\n", n, fact(n));
    return 0;
}
