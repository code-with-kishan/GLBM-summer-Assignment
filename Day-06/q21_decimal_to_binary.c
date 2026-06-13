/*
 * GL Bajaj Summer Assignment — Day 06
 * Problem : Convert decimal to binary
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n, bin[32], i = 0;
    printf("Enter decimal number: ");
    scanf("%d", &n);
    if (n == 0) { printf("Binary: 0\n"); return 0; }
    int temp = n;
    while (temp > 0) { bin[i++] = temp % 2; temp /= 2; }
    printf("Binary of %d: ", n);
    for (int j = i - 1; j >= 0; j--) printf("%d", bin[j]);
    printf("\n");
    return 0;
}
