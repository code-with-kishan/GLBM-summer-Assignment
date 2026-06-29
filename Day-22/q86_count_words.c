/*
 * GL Bajaj Summer Assignment — Day 22
 * Problem : Count words in a sentence
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[500];
    int words = 0, inWord = 0;
    printf("Enter sentence: ");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i]; i++) {
        if (!isspace(s[i])) { if (!inWord) words++; inWord = 1; }
        else inWord = 0;
    }
    printf("Word count = %d\n", words);
    return 0;
}
