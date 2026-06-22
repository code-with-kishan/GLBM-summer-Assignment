/*
 * GL Bajaj Summer Assignment — Day 15
 * Problem : Rotate array right
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size and rotations: ");
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    k %= n;
    int temp[k];
    for (int i = 0; i < k; i++) temp[i] = arr[n - k + i];
    for (int i = n - 1; i >= k; i--) arr[i] = arr[i - k];
    for (int i = 0; i < k; i++) arr[i] = temp[i];
    printf("Right rotated: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
