/*
 * GL Bajaj Summer Assignment — Day 11
 * Problem : Function to find factorial
 * Author  : Kishan Nishad
 */
#include <stdio.h>

long long factorial(int n) {
    long long f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %lld\n", n, factorial(n));
    return 0;
}
