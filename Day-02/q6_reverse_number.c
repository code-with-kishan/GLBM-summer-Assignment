/*
 * GL Bajaj Summer Assignment — Day 02
 * Problem : Reverse a number
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n, rev = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    int temp = n;
    while (temp != 0) { rev = rev * 10 + temp % 10; temp /= 10; }
    printf("Reversed number = %d\n", rev);
    return 0;
}
