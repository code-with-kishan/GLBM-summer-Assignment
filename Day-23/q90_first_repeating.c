/*
 * GL Bajaj Summer Assignment — Day 23
 * Problem : Find first repeating character
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

int main() {
    char s[500];
    int freq[256] = {0};
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    if (s[len - 1] == '\n') s[--len] = '\0';
    for (int i = 0; i < len; i++) freq[(unsigned char)s[i]]++;
    for (int i = 0; i < len; i++) {
        if (freq[(unsigned char)s[i]] > 1) {
            printf("First repeating char: '%c'\n", s[i]);
            return 0;
        }
    }
    printf("No repeating character.\n");
    return 0;
}
