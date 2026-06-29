/*
 * GL Bajaj Summer Assignment — Day 22
 * Problem : Remove spaces from string
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    char s[500], res[500];
    int j = 0;
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i]; i++) if (s[i] != ' ' && s[i] != '\n') res[j++] = s[i];
    res[j] = '\0';
    printf("After removing spaces: %s\n", res);
    return 0;
}
