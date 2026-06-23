/*
 * GL Bajaj Summer Assignment — Day 16
 * Problem : Find maximum frequency element
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int maxFreq = 0, result = arr[0];
    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) if (arr[j] == arr[i]) freq++;
        if (freq > maxFreq) { maxFreq = freq; result = arr[i]; }
    }
    printf("Max frequency element = %d (appears %d times)\n", result, maxFreq);
    return 0;
}
