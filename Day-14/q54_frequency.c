/*
 * GL Bajaj Summer Assignment — Day 14
 * Problem : Frequency of an element
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n, key, count = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) if (arr[i] == key) count++;
    printf("Frequency of %d = %d\n", key, count);
    return 0;
}
