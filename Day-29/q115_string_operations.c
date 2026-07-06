/*
 * GL Bajaj Summer Assignment — Day 29
 * Problem : Menu-driven string operations
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[500]; int choice;
    printf("=== String Operations ===\n");
    do {
        printf("\n1.Input  2.Length  3.Reverse  4.Upper  5.Lower  6.Palindrome  7.Word Count  8.Exit\nChoice: ");
        scanf("%d", &choice); getchar();
        if (choice == 1) { printf("Enter string: "); fgets(s, sizeof(s), stdin); s[strcspn(s,"\n")]='\0'; }
        int len = strlen(s);
        switch(choice) {
            case 2: printf("Length = %d\n", len); break;
            case 3: { char t[500]; strcpy(t, s); for(int i=0,j=len-1;i<j;i++,j--){char c=t[i];t[i]=t[j];t[j]=c;} printf("Reversed: %s\n",t); break; }
            case 4: { char t[500]; strcpy(t,s); for(int i=0;t[i];i++) t[i]=toupper(t[i]); printf("Upper: %s\n",t); break; }
            case 5: { char t[500]; strcpy(t,s); for(int i=0;t[i];i++) t[i]=tolower(t[i]); printf("Lower: %s\n",t); break; }
            case 6: { int p=1; for(int i=0,j=len-1;i<j;i++,j--) if(s[i]!=s[j]){p=0;break;} printf("%s\n",p?"Palindrome":"Not palindrome"); break; }
            case 7: { int w=0,in=0; for(int i=0;s[i];i++){if(!isspace(s[i])){if(!in)w++;in=1;}else in=0;} printf("Words = %d\n",w); break; }
            case 8: printf("Bye!\n"); break;
        }
    } while(choice != 8);
    return 0;
}
