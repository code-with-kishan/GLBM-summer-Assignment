/*
 * GL Bajaj Summer Assignment — Day 01
 * Problem : Count digits in a number
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    long long n;
    int count = 0;
    printf("Enter number: ");
    scanf("%lld", &n);
    if (n == 0) { printf("Digits: 1\n"); return 0; }
    if (n < 0) n = -n;
    while (n > 0) { count++; n /= 10; }
    printf("Number of digits = %d\n", count);
    return 0;
}
