/*
 * GL Bajaj Summer Assignment — Day 23
 * Problem : Check anagram strings
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
    int anagram = 1;
    for (int i = 0; i < 256; i++) if (freqA[i] != freqB[i]) { anagram = 0; break; }
    printf("Strings are %sanagrams.\n", anagram ? "" : "not ");
    return 0;
}
