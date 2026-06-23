/*
 * GL Bajaj Summer Assignment — Day 16
 * Problem : Find pair with given sum
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n, target;
    printf("Enter size and target sum: ");
    scanf("%d %d", &n, &target);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Pairs with sum %d:\n", target);
    int found = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == target) {
                printf("(%d, %d)\n", arr[i], arr[j]); found = 1;
            }
    if (!found) printf("No pair found.\n");
    return 0;
}
