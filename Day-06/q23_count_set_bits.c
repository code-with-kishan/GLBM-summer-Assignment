/*
 * GL Bajaj Summer Assignment — Day 06
 * Problem : Count set bits in a number
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    int temp = n;
    while (temp) { count += temp & 1; temp >>= 1; }
    printf("Number of set bits in %d = %d\n", n, count);
    return 0;
}
