/*
 * GL Bajaj Summer Assignment — Day 16
 * Problem : Find missing number in array (1 to N)
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter N (array has N-1 elements from 1 to N): ");
    scanf("%d", &n);
    int arr[n - 1];
    long long expected = (long long)n * (n + 1) / 2, actual = 0;
    for (int i = 0; i < n - 1; i++) { scanf("%d", &arr[i]); actual += arr[i]; }
    printf("Missing number = %lld\n", expected - actual);
    return 0;
}
