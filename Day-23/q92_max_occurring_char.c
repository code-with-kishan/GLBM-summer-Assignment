/*
 * GL Bajaj Summer Assignment — Day 23
 * Problem : Find maximum occurring character
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

int main() {
    char s[500];
    int freq[256] = {0};
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] && s[i] != '\n'; i++) freq[(unsigned char)s[i]]++;
    int maxF = 0; char maxC = 0;
    for (int i = 0; i < 256; i++)
        if (freq[i] > maxF) { maxF = freq[i]; maxC = i; }
    printf("Max occurring char: '%c' (%d times)\n", maxC, maxF);
    return 0;
}
