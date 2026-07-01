/*
 * GL Bajaj Summer Assignment — Day 24
 * Problem : Remove duplicate characters from string
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

int main() {
    char s[500], res[500];
    int seen[256] = {0}, j = 0;
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] && s[i] != '\n'; i++) {
        unsigned char c = s[i];
        if (!seen[c]) { seen[c] = 1; res[j++] = s[i]; }
    }
    res[j] = '\0';
    printf("After removing duplicates: %s\n", res);
    return 0;
}
