/*
 * GL Bajaj Summer Assignment — Day 13
 * Problem : Count even and odd elements
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) even++; else odd++;
    }
    printf("Even count = %d\nOdd count = %d\n", even, odd);
    return 0;
}
