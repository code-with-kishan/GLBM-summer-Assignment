/*
 * GL Bajaj Summer Assignment — Day 24
 * Problem : Find longest word in a sentence
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

int main() {
    char s[500], word[100], longest[100] = "";
    printf("Enter sentence: ");
    fgets(s, sizeof(s), stdin);
    int i = 0, j = 0;
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i]; i++) {
        if (s[i] != ' ') {
            word[j++] = s[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > strlen(longest)) strcpy(longest, word);
            j = 0;
        }
    }
    word[j] = '\0';
    if (strlen(word) > strlen(longest)) strcpy(longest, word);
    printf("Longest word: %s\n", longest);
    return 0;
}
