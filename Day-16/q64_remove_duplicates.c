/*
 * GL Bajaj Summer Assignment — Day 16
 * Problem : Remove duplicates from array
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n], res[n], rsize = 0;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        int dup = 0;
        for (int j = 0; j < rsize; j++) if (res[j] == arr[i]) { dup = 1; break; }
        if (!dup) res[rsize++] = arr[i];
    }
    printf("After removing duplicates: ");
    for (int i = 0; i < rsize; i++) printf("%d ", res[i]);
    printf("\n");
    return 0;
}
