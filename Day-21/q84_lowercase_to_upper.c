/*
 * GL Bajaj Summer Assignment — Day 21
 * Problem : Convert lowercase to uppercase
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200];
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i]; i++) s[i] = toupper(s[i]);
    printf("Uppercase: %s", s);
    return 0;
}
