/*
 * GL Bajaj Summer Assignment — Day 11
 * Problem : Function to find maximum
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int maxOf(int a, int b) { return a > b ? a : b; }

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Maximum = %d\n", maxOf(a, b));
    return 0;
}
