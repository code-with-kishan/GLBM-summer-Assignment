/*
 * GL Bajaj Summer Assignment — Day 04
 * Problem : Generate Fibonacci series
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    long long a = 0, b = 1;
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%lld ", a);
        long long c = a + b; a = b; b = c;
    }
    printf("\n");
    return 0;
}
