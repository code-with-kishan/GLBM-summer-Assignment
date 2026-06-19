/*
 * GL Bajaj Summer Assignment — Day 12
 * Problem : Function for palindrome check
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp > 0) { rev = rev * 10 + temp % 10; temp /= 10; }
    return rev == n;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d is %sa palindrome.\n", n, isPalindrome(n) ? "" : "not ");
    return 0;
}
