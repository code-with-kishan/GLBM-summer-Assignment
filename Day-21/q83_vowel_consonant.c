/*
 * GL Bajaj Summer Assignment — Day 21
 * Problem : Count vowels and consonants
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200];
    int v = 0, c = 0;
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i]; i++) {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') v++;
        else if (isalpha(ch)) c++;
    }
    printf("Vowels = %d, Consonants = %d\n", v, c);
    return 0;
}
