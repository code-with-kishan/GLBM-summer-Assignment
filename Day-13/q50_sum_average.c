/*
 * GL Bajaj Summer Assignment — Day 13
 * Problem : Find sum and average of array
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    long long sum = 0;
    for (int i = 0; i < n; i++) { scanf("%d", &arr[i]); sum += arr[i]; }
    printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum / n);
    return 0;
}
