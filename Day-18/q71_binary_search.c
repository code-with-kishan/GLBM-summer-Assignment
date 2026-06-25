/*
 * GL Bajaj Summer Assignment — Day 18
 * Problem : Binary search
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n, key;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    int lo = 0, hi = n - 1, mid, found = -1;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (arr[mid] == key) { found = mid; break; }
        else if (arr[mid] < key) lo = mid + 1;
        else hi = mid - 1;
    }
    if (found != -1) printf("Found at index %d\n", found);
    else printf("Not found.\n");
    return 0;
}
