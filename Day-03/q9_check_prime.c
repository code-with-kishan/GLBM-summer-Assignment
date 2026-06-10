/*
 * GL Bajaj Summer Assignment — Day 03
 * Problem : Check whether a number is prime
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d is %s prime.\n", n, isPrime(n) ? "a" : "not a");
    return 0;
}
