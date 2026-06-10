/*
 * GL Bajaj Summer Assignment — Day 03
 * Problem : Find GCD of two numbers
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int gcd(int a, int b) {
    while (b) { int t = b; b = a % b; a = t; }
    return a;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    return 0;
}
