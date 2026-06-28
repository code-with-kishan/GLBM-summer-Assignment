/*
 * GL Bajaj Summer Assignment — Day 21
 * Problem : Find string length without strlen()
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int myStrlen(char *s) { int i = 0; while (s[i]) i++; return i; }

int main() {
    char s[200];
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    int len = myStrlen(s);
    if (s[len - 1] == '\n') len--;  // remove newline
    printf("Length = %d\n", len);
    return 0;
}
