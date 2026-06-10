/*
 * GL Bajaj Summer Assignment — Day 03
 * Problem : Find LCM of two numbers
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("LCM(%d, %d) = %d\n", a, b, (a / gcd(a, b)) * b);
    return 0;
}
