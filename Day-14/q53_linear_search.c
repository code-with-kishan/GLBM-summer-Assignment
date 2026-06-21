/*
 * GL Bajaj Summer Assignment — Day 14
 * Problem : Linear search
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n, key;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    int found = -1;
    for (int i = 0; i < n; i++) if (arr[i] == key) { found = i; break; }
    if (found != -1) printf("Found at index %d\n", found);
    else printf("Element not found.\n");
    return 0;
}
