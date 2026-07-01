/*
 * GL Bajaj Summer Assignment — Day 24
 * Problem : Check string rotation
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[200], temp[400];
    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);
    int la = strlen(a), lb = strlen(b);
    if (a[la-1]=='\n') a[--la]='\0';
    if (b[lb-1]=='\n') b[--lb]='\0';
    if (la != lb) { printf("Not a rotation.\n"); return 0; }
    strcpy(temp, a); strcat(temp, a);
    printf(strstr(temp, b) ? "Is a rotation.\n" : "Not a rotation.\n");
    return 0;
}
