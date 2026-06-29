/*
 * GL Bajaj Summer Assignment — Day 22
 * Problem : Check palindrome string
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
    int pal = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--)
        if (s[i] != s[j]) { pal = 0; break; }
    printf("\"%s\" is %sa palindrome.\n", s, pal ? "" : "not ");
    return 0;
}
