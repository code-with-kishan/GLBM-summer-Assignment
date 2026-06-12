/*
 * GL Bajaj Summer Assignment — Day 05
 * Problem : Check strong number
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int fact(int n) { return n <= 1 ? 1 : n * fact(n - 1); }

int main() {
    int n, temp, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (temp) { sum += fact(temp % 10); temp /= 10; }
    printf("%d is %sa strong number.\n", n, (sum == n) ? "" : "not ");
    return 0;
}
