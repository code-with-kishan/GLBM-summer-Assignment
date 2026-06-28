/*
 * GL Bajaj Summer Assignment — Day 21
 * Problem : Reverse a string
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    if (s[len - 1] == '\n') s[--len] = '\0';
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char t = s[i]; s[i] = s[j]; s[j] = t;
    }
    printf("Reversed: %s\n", s);
    return 0;
}
