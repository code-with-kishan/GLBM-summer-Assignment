/*
 * GL Bajaj Summer Assignment — Day 22
 * Problem : Character frequency
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[500];
    int freq[256] = {0};
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i]; i++) if (s[i] != '\n') freq[(unsigned char)s[i]]++;
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++)
        if (freq[i] > 0 && isprint(i))
            printf("'%c': %d\n", i, freq[i]);
    return 0;
}
