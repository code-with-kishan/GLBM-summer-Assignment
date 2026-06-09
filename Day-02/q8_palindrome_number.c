/*
 * GL Bajaj Summer Assignment — Day 02
 * Problem : Check whether a number is palindrome
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n, rev = 0, temp;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) { rev = rev * 10 + temp % 10; temp /= 10; }
    printf("%d is %sa palindrome.\n", n, (n == rev) ? "" : "not ");
    return 0;
}
