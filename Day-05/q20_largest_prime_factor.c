/*
 * GL Bajaj Summer Assignment — Day 05
 * Problem : Find largest prime factor
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    long long n, largest = -1;
    printf("Enter number: ");
    scanf("%lld", &n);
    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) { largest = i; n /= i; }
    }
    if (n > 1) largest = n;
    printf("Largest prime factor = %lld\n", largest);
    return 0;
}
