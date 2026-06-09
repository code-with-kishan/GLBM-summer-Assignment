/*
 * GL Bajaj Summer Assignment — Day 02
 * Problem : Sum of digits of a number
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n, sum = 0, temp;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = (n < 0) ? -n : n;
    while (temp > 0) { sum += temp % 10; temp /= 10; }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
