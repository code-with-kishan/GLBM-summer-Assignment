/*
 * GL Bajaj Summer Assignment — Day 24
 * Problem : Compress a string (Run Length Encoding)
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

int main() {
    char s[500];
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    if (s[len-1]=='\n') s[--len]='\0';
    printf("Compressed: ");
    for (int i = 0; i < len; ) {
        int j = i;
        while (j < len && s[j] == s[i]) j++;
        int count = j - i;
        if (count > 1) printf("%c%d", s[i], count);
        else printf("%c", s[i]);
        i = j;
    }
    printf("\n");
    return 0;
}
