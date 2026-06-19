/*
 * GL Bajaj Summer Assignment — Day 12
 * Problem : Function for Fibonacci
 * Author  : Kishan Nishad
 */
#include <stdio.h>

void printFib(int n) {
    long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%lld ", a);
        long long c = a + b; a = b; b = c;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printFib(n);
    return 0;
}
