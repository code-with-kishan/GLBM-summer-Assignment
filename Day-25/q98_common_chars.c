/*
 * GL Bajaj Summer Assignment — Day 25
 * Problem : Find common characters in two strings
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[200];
    int freqA[256] = {0}, freqB[256] = {0};
    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);
    for (int i = 0; a[i] && a[i] != '\n'; i++) freqA[(unsigned char)a[i]]++;
    for (int i = 0; b[i] && b[i] != '\n'; i++) freqB[(unsigned char)b[i]]++;
    printf("Common characters: ");
    for (int i = 32; i < 127; i++)
        if (freqA[i] > 0 && freqB[i] > 0) printf("%c ", i);
    printf("\n");
    return 0;
}
